obj-m += irq.o

## Indicate what arch you want to compile ##
ARCH := arm
export

## Indicate your toolchain path ##
CROSS_COMPILE := arm-linux-gnueabihf-
export

## Modified KERNEL_PATH to your kernel source path ##
KERNEL_PATH := /home/hua/Desktop/RTOS/no-rt-linux-32/

all:
	make -C $(KERNEL_PATH) M=$(PWD) modules

clean:
	make -C $(KERNEL_PATH) M=$(PWD) clean
