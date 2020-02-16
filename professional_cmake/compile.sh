#!/bin/bash

# Set some variables
DIR=`dirname $0`
BUILD="$DIR/build"
SCRIPTS="../../.external/scripts/bash" # Relative to $BUILD
GRAPH="graph"
GENERATOR="Ninja"
OPTIONS="--loglevel=DEBUG" # --log-level in CMake 3.16 or later

# Run CMake in the new clean dir
rm -rf $BUILD
mkdir -p $BUILD
cd $BUILD
cmake -G"$GENERATOR" $OPTIONS ..
echo

# Build all the targets
cmake --build .
echo

# Also graph the dependencies
$SCRIPTS/graph_dependencies.sh
