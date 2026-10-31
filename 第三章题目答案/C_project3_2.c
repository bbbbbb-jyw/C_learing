//每次这么解释感觉挺麻烦的 后续的程序 我们就不再解释了 直接写代码 毕竟只是学习记录 以后做项目后在详细说明吧！
//Q2编写一个程序，要求提示用户输入一个 ASCII 码值（如 66），然后打印出相应的字符。
#include<stdio.h>
int main ()
{   
    int a;
    scanf("%d",&a);
    char b;
    b=a;
    printf("%c",b);
    return 0;
}