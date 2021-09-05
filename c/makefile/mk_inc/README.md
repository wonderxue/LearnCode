# MK_INC
## introduction
嵌套的`makefile`文件编写  
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
嵌套的makefile语法
```makefile
SUB_DIR:
	for dir in $(SUB_DIR);do \
	make -C $$dir; \
	done#不能多线程

SUB_DIR:
    make -C $@#可以多线程-jn
```
