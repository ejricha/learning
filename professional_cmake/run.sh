#!/bin/bash
#
# Build the code in the specified directory

DIR=`dirname $0`
CHAPTER="Ch14"
NINJA="ninja -C $DIR/build"
OPTS="-v"

$NINJA clean
echo
$NINJA $CHAPTER $OPTS
