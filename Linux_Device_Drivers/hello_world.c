//Hello world Kernel Character Device drivers using  init and exit() functions 
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

static int __init hello_world_init(void)
{
        printk(KERN_INFO "Welcome to Device Drivers\n");
        printk(KERN_INFO "This is a simple module\n");
        printk(KERN_INFO "Kernel module is inserted successfully..\n");
        return 0;
}

static void __exit  hello_world_exit(void)
{
        printk(KERN_INFO"Kernel module is removed successfully..\n");

}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Device Drivers <srimanth@gmail.com>");
MODULE_DESCRIPTION("A Simple hello world driver");
MODULE_VERSION("2:1.0");
module_init(hello_world_init);
module_exit(hello_world_exit);

/*OUTPUT IS: [ 4121.372948] Welcome to Device Drivers
[ 4121.372964] This is a simple module
[ 4121.372964] Kernel module is inserted successfully..
[ 4346.484899] Kernel module is removed successfully..










NOTES:
For Make file steps:
obj-m += hello1.o
all:
	make -C /lib/modules/$(uname -r)/build M=$PWD modules
clean:	
	make -C /lib/modules/$(uname -r)/build M=$PWD clean
  
  2nd step run this in cmd prompt: make -C /lib/modules/$(uname -r)/build M=$PWD modules
  
  
  3rd step:sudo insmod hello_world.ko
  4th step to print  the data: dmesg
  5th step to remove module: rmmod hello_world.ko
  6th step to print the running module: dmesg
 
 Note:
  To print the permanently dmesg we have to do this: $ echo kernel.dmesg_restrict = 0 | sudo tee -a /etc/sysctl.d/10-local.conf >/dev/null
$ cat /etc/sysctl.d/10-local.conf 
  */
