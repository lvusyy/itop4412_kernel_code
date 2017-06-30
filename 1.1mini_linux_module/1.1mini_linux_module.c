//
// Created by lvusyy on 6/28/17.
//

//最小化linux 驱动

#include <linux/init.h>
#include <linux/module.h>

//先配置下协议
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("lvusyy");

static int hello_init(void) {
    printk(KERN_EMERG
    "HELLO WORLD enter!\n");
    return 0;
}

static void hello_exit(void) {
    printk(KERN_EMERG
    "HELLO WORLD exit!\n");
}

//配置模块的初始化入口
module_init(hello_init);
//配置模块的出口，　模块退出时　回调　hello_exit（）
module_exit(hello_exit);

