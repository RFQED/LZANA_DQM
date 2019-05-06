#
# Boilerplate Make file to invoke 'cmake'
#
#  Created by Simon Patton on 6/7/16.
#  Copyright 2016 LZ Collaboration. All rights reserved.
#
# Modified by Sergey Burdin 5/2/19
#

CMAKE=cmake
MAKE=make

# file to create RQ library
FILE = /hepstore/burdin/data/lz_Miniproduction_1_lzap.root

ifeq (${LZANA_BUILD_CONFIG}, )
  $(error LZANA_BUILD_CONFIG must be defined before $(MAKE) is executed, try running script/setup.[c]sh)
endif

BUILD_TREE=build.${LZANA_BUILD_CONFIG}

COMMONDIR = common
RQDIR  = rqlib

build : $(BUILD_TREE)/Makefile
	cd $(BUILD_TREE) && $(MAKE) && $(MAKE) install

test : build
	cd $(BUILD_TREE) && $(MAKE) test

rqlib : 
	@echo "Producing $(RQDIR) from $(FILE)"
	root -b -q $(COMMONDIR)/configure.C\(\"$(FILE)\"\)

clean: 
	@echo "* removing $(BUILD_TREE)"
	rm -rf $(BUILD_TREE)

rqclean:
	@echo "* removing $(RQDIR)"
	rm -rf $(RQDIR)

purge: rqclean clean


.PHONY: build test all clean purge rqclean

$(BUILD_TREE)/Makefile : rqlib
	mkdir -p $(BUILD_TREE)
	cd $(BUILD_TREE) && $(CMAKE) $(CMAKEFLAGS) $(CURDIR) && $(MAKE) install
