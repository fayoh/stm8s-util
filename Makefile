INSTALL=install
PREFIX=/usr/share/sdcc
OBJECTS=stm8/stm8s.h

.PHONY: install

install:
	$(INSTALL) -m 0644 $(OBJECTS) $(PREFIX)/include
