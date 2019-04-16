INSTALL=install
MKDIR=mkdir
PREFIX=/usr/share/sdcc
OBJECTS=stm8/stm8s.h

.PHONY: install

install:
	$(MKDIR) -p $(PREFIX)/include
	$(INSTALL) -m 0644 $(OBJECTS) $(PREFIX)/include
