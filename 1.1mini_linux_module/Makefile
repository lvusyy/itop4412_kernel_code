#!/bin/bash

obj-m += 1.1mini_linux_module.o

KDIR := /home/lvusyy/minLinux/iTop4412_Kernel_3.0 #内核文件的配置文件　要先配置好．

PWD ?= $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	rm -rf *.o
