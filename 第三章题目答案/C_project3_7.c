#include <stdio.h>

int main(void)
{
    int v = 255;

    printf("=== 同一个数 255，七种打印方式 ===\n");
    printf("  %%d   十进制    = %d\n", v);
    printf("  %%x   十六进制   = %x\n", v);
    printf("  %%X   十六进制大 = %X\n", v);
    printf("  %%#x  带 0x 前缀 = %#x\n", v);
    printf("  %%#X  带 0X 前缀 = %#X\n", v);
    printf("  %%o   八进制     = %o\n", v);
    printf("  %%#o  八进制带 0 = %#o\n", v);

    printf("\n=== 补零对齐 %%08X（嵌入式最常用）===\n");
    printf("  0x%08X\n", 0x1A);
    printf("  0x%08X\n", 0x40011000);
    printf("  0x%04X\n", 0x1A);
    printf("  0x%x  <- 不补零，长度会跳\n", 0x1A);

    printf("\n=== 负数打出来是什么 ===\n");
    printf("  -1 当成无符号 = %x\n", (unsigned)-1);
    printf("  -2 当成无符号 = %x\n", (unsigned)-2);
    printf("  0xFFFFFFFF 当有符号读 = %d\n", (int)0xFFFFFFFF);
    return 0;
}
