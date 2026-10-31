/*编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。然后，如果系统支持，再打印成 p 记数法（即十六进制记数法）。按以下格式输出（实际显示的指数位数因系统而异）：
Enter a floating-point value: 64.25
fixed-point notation: 64.250000
exponential notation: 6.425000e+01
p notation: 0x1.01p+6*/
#include<stdio.h>
int main()
{    
    float a;
    printf("Enter a floating-point value: ");
    scanf("%f",&a);
    printf("fixed-point notation: %.2f\n",a);
    printf("exponential notation: %e\n",a);   
    printf("p notation: %a*/",a);//对于这里的警告当前我还无法解释（这里ai给的出的答案是编译期的警告和运行时的输出，用的是两个完全独立的程序，各自使用两套规则表？？没听懂 等学到后面在看吧 ）
    return 0;
}
//这里打印的浮点数的指数位数可能会因系统而异，具体取决于编译器和平台的实现。 至于第四个输出格式，p 记数法是 C99 标准引入的一种浮点数表示方法，它使用十六进制表示浮点数，并且使用 p 来表示指数部分。 例如，0x1.01p+6 表示 1.01（十六进制）乘以 2 的 6 次方，即 64.25。 
