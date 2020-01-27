#!/bin/bash

BUILD=build
GRAPH=graph
DOT=graph.dot

# Reset the build dir
rm -rf $BUILD
mkdir -p $BUILD
cd $BUILD

# Run CMake, and generate dependency graphs
cmake -GNinja --graphviz=$GRAPH/$DOT ..
mv $GRAPH/$DOT $GRAPH/$DOT.ALL

# Build all the targets
cmake --build .
cd -

# Convert graphs into .svg files
for F in $BUILD/$GRAPH/$DOT*
do
	O=${F/$DOT\./}
	dot -Tsvg $F -o $O.svg
done

# Also create links in all the svg files
./svg_create_links.py $BUILD/$GRAPH/*.svg
