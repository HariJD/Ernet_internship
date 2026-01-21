APPLICATION = gnrc_border_router
BOARD ?= remote-reva

RIOTBASE ?= $(CURDIR)/../../RIOT

USEMODULE += gnrc_netif_default
USEMODULE += gnrc_ipv6
USEMODULE += gnrc_rpl
USEMODULE += gnrc_udp
USEMODULE += gnrc_icmpv6
USEMODULE += gnrc_ndp
USEMODULE += gnrc_6lowpan
USEMODULE += shell
USEMODULE += shell_commands
USEMODULE += auto_init_gnrc_netif

TERMFLAGS = -p /dev/ttyUSB0 -b 115200

include $(RIOTBASE)/Makefile.include
