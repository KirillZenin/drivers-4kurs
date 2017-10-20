ifneq ($(KERNELRELEASE),)
obj-m:=hello.o
else
KDIR:=/home/BGZKvm/Downloads/linux-4.13.3

all:
	$(MAKE) -C $(KDIR) M=$$PWD
endif
