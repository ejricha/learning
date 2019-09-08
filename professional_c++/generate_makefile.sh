#!/bin/bash
#
# Generate a makefile at each directory

# Output to a Makefile
OUT=Makefile

# Start with these global variables
cat <<EOF > $OUT
# Global variables
STD        := -lstdc++ -std=c++17 -pthread
CC         := gcc \$(STD)
CXX        := g++ \$(STD)
WARN       := -Wall -Wextra -Wfatal-errors
CFLAGS     := -fPIC \$(WARN) -O2 -g
RM         := rm -f

EOF

# Find all subdirectories, and have a binary for each
DIRS=`ls -1d */ | sort -u`
BINS=""
RULES=""
for SUB in $DIRS
do
  # Binary to build
  D=${SUB/\//}
  B="$D/$D.bin"
  BINS+=" $B"

  # Dependencies
  F=`ls -1d $D/*/*.cpp`

  # Rule for this binary
  RULES+="\n$B : $F\n\t\$(CXX) \$(CFLAGS) -o \$@ \$^\n"
done

echo -e ".PHONY: all\nall:$BINS\n" >> $OUT
echo -e ".PHONY: clean\nclean:\n\t\$(RM) $BINS\n" >> $OUT

# Actually build the binary
echo -e "# Actually build the binaries" >> $OUT
echo -e $RULES >> $OUT
