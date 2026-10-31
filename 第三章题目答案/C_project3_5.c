//一年大约有 3.156×10^7 秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
/*#include<stdio.h>
int  main  ()
{   
    int  a;
    printf("请输入您的年龄：");
    scanf("%d",&a);
    printf("哇!!你已经活了%d秒你也太牛逼了",a*(3.156e+007));
    return  0;
}*/
//上面这是我一开始的答案 可以看看问题在哪（刚在复习题学的就忘记了）
#include <stdio.h>

int main()
{
    int age;
    printf("请输入您的年龄：");
    scanf("%d", &age);

    printf("\n你已经活了 %.0f 秒，也太牛逼了，该去休息了。\n", age * 3.156e7);
    return 0;
}
