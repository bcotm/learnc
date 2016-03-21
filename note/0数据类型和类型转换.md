# 0数据类型与类型转换
数据类型决定了：
>- 占用多大内存空间
>- 如何解释位模式

##0.1数据类型
###0.1.0基本类型
基本数据类型包括**整型**和**浮点类型**。

- **整型**
分为无符号和有符号，通过最高位是否解释为符号位来区别。  
因此在有限位二进制中，表示的整数范围也就确定了。  
C99规定了最少的位数，实际是多少是由实现决定的。比如char可以和long所占空间一样大。

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
|long long	|8|−9,223,372,036,854,775,808 to 9,223,372,036,854,775,807|

- **浮点型**
数据范围定义在<float.h>中，比如FLT\_MAX，DBL\_MIN

| type | size(bytes) | range |
|float	|4|	1.2E-38 to 3.4E+38	6 decimal places|
|double	|8|	2.3E-308 to 1.7E+308	15 decimal places|
|long double	|10|	3.4E-4932 to 1.1E+4932	19 decimal places|

###0.1.1其他类型
比如枚举enum,联合union,指针，结构体，数组

##0.2类型转换

##0.3有趣的问题~~

对float进行位操作，使用整型指针隐式。

#### `有趣的实验0.1-寻找整型数据范围~`


``` c
#include <stdio.h>
#include <limits.h>

int main(){
	printf("%d", INT_MAX);
	return 0;
}
```


###0.1.2瞟一下sizeof,size_t
> **`size_t`** is guaranteed to be able to express the maximum size of any object, including any array
<stdint.h> SIZE_MAX

size_t is unsigned int at least 16bits <stddef.h> C99
<limits.h>
<float.h>
<inttypes.h>  fixed width

###飘一下ptrdiff_t
>**`ptrdiff_t`** is a signed integral type used to represent the difference between pointers.

##0.4参考
- [The GNU C Reference Manual](http://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html)
