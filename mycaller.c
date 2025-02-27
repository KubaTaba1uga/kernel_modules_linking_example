/*
 * mycaller.c
 ****************************************************************
 * Brief Description:
 * A very simple module which shows how one can link multiple C files into one lkm. We have this 
 *    file which simulates a main file of the module, and we have mylib.c file which simulates
 *    library that cummulates various functions used by the main file.
 */

#include <linux/init.h>
#include <linux/module.h>
#include "mylib.h"

MODULE_AUTHOR("KubaTaba1uga");
MODULE_DESCRIPTION("a simple LKM showing how link multiple src files into single module");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static int __init mycaller_init(void)
{
  pr_info("Inserted: %d", 	product(5, 5)
);
        return 0;
}

static void __exit mycaller_exit(void)
{
        pr_info("Removed");  
}

module_init(mycaller_init);
module_exit(mycaller_exit);
