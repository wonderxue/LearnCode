# BASE
## introduction
基本的`makefile`文件编写  
实现了指定`build`,`bin`,`inc`,`src`;
具体指令有：
> `all`  
&emsp; 编译所有文件  

>`install`  
&emsp; 安装文件，(将可执行文件拷贝至`bin`文件夹)

>`exec`  
&emsp; 运行可执行文件

>`clean`  
&emsp; 删除`build`,`bin`文件夹

## progress
基本的makefile语法
```makefile
defind exp#定义命令块(函数)
    @echo $(1)
endef
$(wildcard src/*.c)#返回路径src下的所有.c文件
$(foreach i,var,$(call exp,$(i)))#循环执行exp函数
OBJ=$(SRC:.c=.o)#返回与.c一一对应的.o
$(subst :, ,$(VPATH))#将VPATH中的':'换成' '。
$(dir src/main.cpp)#返回src
$(notdir src/main.cpp)#返回main.c
```
