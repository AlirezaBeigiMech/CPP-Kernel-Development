# CPP-Kernel-Development

This repository contains an implementation of a Linux kernel module written in C++, based on the tutorial by Oleg Kutkov: C++ in Linux Kernel. **[Link](https://olegkutkov.me/2019/11/10/cpp-in-linux-kernel/)**-

The project demonstrates how to integrate C++ code into a Linux kernel module, leveraging C++ features while maintaining compatibility with the kernel's C-based environment. This is achieved by using extern "C" linkage, custom memory management, and minimal runtime support.

## Features
C++ Classes in the Kernel: Example of using C++ classes, including inheritance and virtual functions, within a Linux kernel module.

* **Custom Memory Management:** Implementation of new and delete operators using kernel memory allocation functions (kmalloc, kfree).

* **Logger Utility:** A simple logging mechanism using printk for debugging and tracing.

* **Makefile: Custom build rules for compiling C++ code alongside C code in the kernel module.

## Prerequisites
* **Linux kernel headers**

* **GCC and G++ compilers**

* **Basic knowledge of Linux kernel module development**

* **Building the Module**


### Clone the repository:
''' git clone https://github.com/AlirezaBeigiMech/CPP-Kernel-Development'''
### Build the kernel module:


make
### Load the module:

''' sudo insmod cpp_kernel.ko '''
### Check the kernel logs:

''' dmesg | tail -n10 '''

### Unload the module:

''' sudo rmmod cpp_kernel '''



## Acknowledgments
This project is based on the tutorial by Oleg Kutkov: C++ in Linux Kernel. Special thanks to Oleg for his insightful article and inspiration.
