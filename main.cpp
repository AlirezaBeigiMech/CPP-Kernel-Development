#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <cstddef>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple C++ kernel module");

static int __init hello_cpp_init(void) {
    printk(KERN_INFO "Hello, C++ Kernel World!\n");
    return 0;
}

static void __exit hello_cpp_exit(void) {
    printk(KERN_INFO "Goodbye, C++ Kernel World!\n");
}

module_init(hello_cpp_init);
module_exit(hello_cpp_exit);