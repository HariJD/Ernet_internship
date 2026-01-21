APPLICATION = ldr_sensor
BOARD ?= remote-reva

RIOTBASE ?= $(CURDIR)/../../RIOT

USEMODULE += periph_adc
USEMODULE += xtimer

TERMFLAGS = -p /dev/ttyUSB0 -b 115200

include $(RIOTBASE)/Makefile.include
