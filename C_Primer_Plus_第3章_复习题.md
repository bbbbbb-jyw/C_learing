# C Primer Plus（第 6 版）第 3 章 数据和 C · 复习题

> 只列题目，不含答案。第 6、7 题的表格我是留白的，你可以打印出来直接填。

---

## 1. 指出下面各种数据使用的合适数据类型（有些可使用多种数据类型）：

a. East Simpleton 的人口   //   longlong 考虑到人口的数量 理应用更大的范围    数据类型的范围为 short≤int≤long≤long long

b. DVD 影碟的价格 //  float

c. 本章出现次数最多的字母  // char

d. 本章出现次数最多的字母次数 // int

## 2. 在什么情况下要用 `long` 类型的变量代替 `int` 类型的变量？

//  数值超出int的范围时改用long 注： 有一些机器默认int是4字节  比如我这台华硕天选1 在VScode的上  用sizeof 得出的int 是32位 和long相同 当我的代码进行移植到较为古早的电脑中时  int 的范围可能会更改成16位而不是我这台显示的32位  如果原先在32位的系统中  它的范围没有超过正32767 或者负的32768的话  可能并不会出错 但是超出必然会出错

## 3. 使用哪些可移植的数据类型可以获得 32 位有符号整数？选择的理由是什么？

// 目前我学到第三章  在第三章中 可移植的数据类型包括 stdint.h and inttypes.h  在开头声明就定义了 int32_t 即可获得32位有符号整数 选择的理由是 由于int 和long 的宽度由编译器平台决定  C语言的标准只定义了int≥16、long≥32 换平台可能变宽也可能变窄 而int32_t定死了一个值

## 4. 指出下列常量的类型和含义（如果有的话）：

a. `'\b'`

b. `1066`

c. `99.44`

d. `0XAA`

e. `2.0e30  `

## 5. Dottie Cawm 编写了一个程序，请找出程序中的错误。

```c
include <stdio.h>   修改后  #include<stdio.h>
main                        int  main() 
(                           {
float g; h;                   float g,h;
float tax, rate;              float  tax , rate;
g = e21;                      g = 1e21; 
tax = rate*g;                 tax = rate*g; 
)                             return 0;
                              }//五个错误
```

## 6. 写出下列常量在声明中使用的数据类型和在 `printf()` 中对应的转换说明：

//对于不同的设备所需的要求不一样，当前这台电脑默认（int==32）位

```
5 . b 6
↓   ↓ ↓
5 + 11/16 + 6/256 = 5 + 0.6875 + 0.0234375 = 5.7109375
```

| 常量          | 类型         | 转换说明（% 转换字符）                                   |
| :---------- | :--------- | :--------------------------------------------- |
| `12`        | int        | %d 十进制整型常量 值为12                                |
| `0X3`       | int        | %x 十六进制  值为3   (1 2 3 4 5 6 7 8 9 a b c d e f) |
| `'C'`       | int（存的是字符） | 按照字符%c看是c 按照数字%d看是常量67                         |
| `2.34E07`   | double     | %e 2.34*10的七次方                                 |
| `'\040'`    | int（存的是字符） | %c 八进制转义 040=32=空格字符                           |
| `7.0`       | double     | %f 无后缀浮点一律double                               |
| `6L`        | long       | %ld L后缀 就是long                                 |
| `6.0f`      | float      | %f F后缀 就是float                                 |
| `0x5.b6p12` | double     | %fp12 是指数2的12次方                                |

## 7. 写出下列常量在声明中使用的数据类型和在 `printf()` 中对应的转换说明（假设 `int` 为 16 位）：

| 常量        | 类型         | 转换说明（% 转换字符）     |
| :-------- | :--------- | :--------------- |
| `012`     | int        | %d 值为11          |
| `2.9e05L` | int        | %d 数值为29000.0    |
| `'s'`     | int（存的是字符） | %d 数值为115（ASCII） |
| `100000`  | long       | %ld 值为100000     |
| `'\n'`    | int        | %d 值为10(ASCII)   |
| `20.0f`   | float      | %f               |
| `0x44`    | int        | %d 4*16一次方+4=68  |
| `-40`     | int        | %d -40           |

## 8. 假设程序的开头有下列声明：

```c
int imate = 2;
long shot = 53456;
char grade = 'A';
float log = 2.71828;
```

把下面 `printf()` 语句中的转换字符补充完整：

// d  ld f c

```c
printf("The odds against the %__ were %__ to 1.\n", imate, shot);
printf("A score of %__ is not an %__ grade.\n", log, grade);
```

## 9. 假设 `ch` 是 `char` 类型的变量。分别使用转义序列、十进制值、八进制字符常量和十六进制字符常量把回车字符赋给 `ch`（假设使用 ASCII 编码值）。

## 10. 修正下面的程序（在 C 中，`/` 表示除以）。

#include <stdio.h>

int main(void)  
{  
int cows, legs;

```
printf("How many cow legs did you count?\n");
scanf("%d", &legs);
cows = legs / 4;
printf("That implies there are %d cows.\n", cows);
return 0;
```

}

```c
void main(int)  / this program is perfect /
{
    cows, legs integer;
    printf("How many cow legs did you count?\n);
    scanf("%c", legs);
    cows = legs / 4;
    printf("That implies there are %f cows.\n", cows)
}
```

## 11. 指出下列转义序列的含义：

a. `\n   换行`

b. `\\   注释`

c. `\"   双引号`

d. `\t  水平制表符即Tap`

---

## 做之前的小提示（不涉及答案）

- 第 6、7 题考的是“常量的默认类型规则”：整数常量看进制和后缀，浮点常量默认 `double`，后缀 `f`/`F` 变 `float`，后缀 `L` 变 `long double`。
- 第 7 题专门加了“假设 `int` 为 16 位”，就是在考你：同一个常量在不同平台上类型可能不一样。
- 第 5、10 题是“找错题”，错的地方不止语法，还有设计上的疏漏——别只盯着分号。
