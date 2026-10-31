//1 个水分子的质量约为 3.0×10^-23 克。1 夸脱（quart）水大约有 950 克。编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
#include <stdio.h>

int main(void)
{
    int quart;

    printf("请输入夸脱数（1 夸脱约 950 克水）：");
    scanf("%d", &quart);

    double grams     = quart * 950.0;      /* 夸脱 -> 克 */
    double molecules = grams / 3.0e-23;    /* 克 -> 分子数 */

    printf("\n%d 夸脱水大约含有 %.6e 个水分子\n", quart, molecules);
    return 0;
}
