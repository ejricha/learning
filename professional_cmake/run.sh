#!/bin/bash
#
# Build the code in the specified directory

DIR=`dirname $0`
PROJECT="ch14"
NINJA="ninja -C $DIR/build"
OPTS="-v"

# Compile
$NINJA clean
echo
$NINJA $PROJECT $OPTS
echo

# Run
for APP in $DIR/build/$PROJECT/${PROJECT}_app*
do
	echo "[$APP]"
	$APP
	echo
done
