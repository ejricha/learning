# Make all of the subdirectories
SUBDIRS := $(wildcard */.)
TOPTARGETS := all clean
OPTS       := -S -j4

SUBDIRS := $(wildcard */.)

$(TOPTARGETS): $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) $(OPTS) -C $@ $(MAKECMDGOALS)

.PHONY: $(TOPTARGETS) $(SUBDIRS)
