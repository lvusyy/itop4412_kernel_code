# Menuconfig
<br>

#### Linux编译器通过.config文件确认哪些代码编译进内核，哪些被裁减掉
#### menuconfig是生成.config的一个工具

#### 在Linux发展过程中，配置内核可以使用一下命令：
- **#make config（基于文本的最为传统的配置界面，不推荐使用）**
- **#make menuconfig（基于文本菜单的配置界面）**
- **#make xconfig（要求QT被安装）**
- **#make gconfig（要求GTK+被安装）**

###  Menuconfig　一些操作
##### • 搜索
    – 界面输入“/”,输入查找关键词，输入“回车”即可搜索
#### • 使用“空格”键选择具体驱动配置，有三种状态
    – “M”编译成模块（需要在编译文件里面特殊定义，后面介绍）
    – “空”不编译状态
    – “*”编译进内核
#### • 退出
    – 不保存退出
    – 保存退出

---

# kconfig文件
>**Kconfig文件在每一级目录下都有**

### driver目录下的Kconfig分析
- menu "Device Drivers"菜单类
    - source “xxx”
- menu "Character devices"
    - – source "xxx"
- 最终选项
    - – Enable LEDS config


### **源码中带的config_for_xxx都是针对不同的操作系统或者功能裁减的.config文件**