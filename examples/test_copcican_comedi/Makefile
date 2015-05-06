#! gmake

#
# Copyright (C) 2010 Cosateq GmbH & Co.KG
#               http://www.cosateq.com/
#               http://www.scale-rt.com/
#
# This file is part of canfestival, a library implementing the canopen
# stack
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
#

#ifneq ($(KERNELRELEASE),)
# Kbuild part of Makefile
TARGET = unix
CAN_DRIVER = can_rtnet
TIMERS_DRIVER = timers_kernel

EXTRA_CFLAGS := -I$(src)/../../include
EXTRA_CFLAGS += -I$(src)/../../include/$(TARGET)
EXTRA_CFLAGS += -I$(src)/../../include/$(CAN_DRIVER)
EXTRA_CFLAGS += -I$(src)/../../include/$(TIMERS_DRIVER)
EXTRA_CFLAGS += -I/usr/src/comedi/include
EXTRA_CFLAGS +=  -DNOT_USE_DYNAMIC_LOADING

OBJS := test_copcican_comedi.o

obj-m := test_copcican_comedi.o
test_copcican_comediko-objs := $(OBJS)

#else
# Normal Makefile
CC = gcc
PREFIX = /usr/local
KERNELDIR := /lib/modules/3.5.7-xenomai-2.6.2.1/build

all: test_copcican_comedi

test_copcican_comedi:
	cat ../../drivers/can_copcican_comedi/Module.symvers > Module.symvers
	$(MAKE) -C $(KERNELDIR) M=$(shell pwd) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(shell pwd) clean
	rm -f Module.symvers

mrproper: clean
	rm -f test_copcican_comedi.c

install:
	$(MAKE) -C $(KERNELDIR) M=$(shell pwd) modules_install

#endif
