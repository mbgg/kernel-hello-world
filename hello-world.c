/*
 * hello_world demonstration.
 *
 * Copyright (C) 2019 Matthias Brugger
 *
 * The source code in this file can be freely used, adapted,
 * and redistributed in source or binary form, so long as an
 * acknowledgment appears in derived source files.  The citation
 * should list that the code comes from the book "Linux Device
 * Drivers" by Alessandro Rubini and Jonathan Corbet, published
 * by O'Reilly & Associates.   No warranty is attached;
 * we cannot take responsibility for errors or fitness for use.
 */

#include <linux/module.h>
//#include <linux/moduleparam.h>
//#include <linux/init.h>

#include <linux/kernel.h>   /* printk() */

MODULE_AUTHOR("Matthias Brugger");
MODULE_LICENSE("GPL2");


/*
 * Module housekeeping.
 */
static int hello_world_init(void)
{
	printk(KERN_WARNING "hello_world\n");
	return 0;
}


static void hello_world_cleanup(void)
{
}

module_init(hello_world_init);
module_exit(hello_world_cleanup);
