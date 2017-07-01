
# 定制一个内核
1. 下载内核代码
2. 配置交叉编译环境
>**注册设备**
- vim
1. arch/arm/mach-xxx/mach-xxx.h
2. drivers/xxx/xxx/Kconfig
```bash
make menuconfig
make zImage
make clean
```