#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("=== 1. 整数上溢 ===\n");
    int a = 2147483647;
    printf("INT_MAX      = %d\n", a);
    printf("INT_MAX + 1  = %d   <- 回绕成最小负数\n", a + 1);

    unsigned int u = 4294967295u;
    printf("UINT_MAX     = %u\n", u);
    printf("UINT_MAX + 1 = %u   <- 明确回绕到 0，定义良好\n", u + 1);

    printf("\n=== 2. 浮点上溢 -> inf ===\n");
    float big = 3.4e38f;
    printf("FLT_MAX      = %e\n", FLT_MAX);
    printf("FLT_MAX * 10 = %e   <- 变 inf\n", big * 10.0f);

    printf("\n=== 3. 浮点下溢 -> 0 ===\n");
    float tiny = 1e-38f;
    printf("FLT_MIN      = %e\n", FLT_MIN);
    printf("FLT_MIN/1e10 = %e   <- 变 0\n", tiny / 1e10f);

    printf("\n=== 4. 精度丢失（你代码踩的那个）===\n");
    float b = 2147483647;
    printf("float 装 2147483647 = %.1f\n", b);
    printf("再加 1              = %.1f\n", b + 1);
    printf("这一档相邻值间隔    = 256\n");
    return 0;
}
