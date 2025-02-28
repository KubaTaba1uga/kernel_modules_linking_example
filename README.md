# kernel_modules_linking_example

A simple Linux kernel module showing how to link multiple source files (**mycaller.c** and **mylib.c**) into one module.  
- **mycaller.c** contains the main module initialization and exit routines.  
- **mylib.c** contains a sample function (`product()`) that can be called from the main module.  

## Building

1. Install required tools and kernel headers:
   ```bash
   sudo apt-get install build-essential linux-headers-$(uname -r)
   ```
2. Build the module:
   ```bash
   make
   ```

## Usage

- Insert the module:
  ```bash
  sudo insmod mymodule.ko
  ```
- View kernel logs:
  ```bash
  dmesg | tail
  ```
- Remove the module:
  ```bash
  sudo rmmod mymodule
  ```

## License

Dual MIT/GPL
