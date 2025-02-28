PWD   := $(shell pwd)
KDIR  ?= /lib/modules/$(shell uname -r)/build/
# Module name has to differ from xxx-objs files names.
# Otherwise you'll met bunch of compilation errors.
obj-m += mymodule.o
mymodule-objs := mycaller.o mylib.o

ccflags-y += -DDEBUG

all:
	make -C $(KDIR) M=$(PWD) modules 
install:
	make -C $(KDIR) M=$(PWD) modules_install
clean:
	make -C $(KDIR) M=$(PWD) clean
