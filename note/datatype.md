# 数据类型与类型转换
数据类型决定了：
>- 占用多大内存空间
>- 如何解释位模式

##数据类型
###基本类型
基本数据类型包括**整型**和**浮点类型**。

- **整型**
分为无符号和有符号，通过最高位是否解释为符号位来区别。  
因此在有限位二进制中，表示的整数范围也就确定了。

| type | size(bytes) | range |
| ---- | ----------- | ----- |
|  char   |  1   |  -128 to 127 or 0 to 255    |
|  unsigned char   |  1   |  0 to 255    |
|  signed char   |  1   |  -128 to 127    |
|int	|2 or 4|-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647|
|unsigned int	|2 or 4|0 to 65,535 or 0 to 4,294,967,295|
|short	|2|	-32,768 to 32,767|
|unsigned short	|2|	0 to 65,535|
|long	|4|	-2,147,483,648 to 2,147,483,647|
|unsigned long	|4|	0 to 4,294,967,295|

- **浮点型**

| type | size(bytes) | range |
|float	|4|	1.2E-38 to 3.4E+38	6 decimal places|
|double	|8|	2.3E-308 to 1.7E+308	15 decimal places|
|long double	|10|	3.4E-4932 to 1.1E+4932	19 decimal places|

###其他类型

###瞟一下sizeof,size_t
> **`size_t`** is guaranteed to be able to express the maximum size of any object, including any array

size_t is unsigned int at least 16bits <stddef.h> C99

##类型转换
##有趣的问题~~
