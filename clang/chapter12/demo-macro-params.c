#include <stdio.h>

// 定义带参数的宏,注意事项
// 一定要有括号，1. 整个值要有括号，2. 参数出现的每个地方都要有括号
#define cube(x) ((x)*(x)*(x))

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(int argc, char const argv[])
{
    printf("%d\n", cube(5));
    printf("%d\n", MIN(5 - 3, 3));
    // printf("%d\n", (5)*(5)*(5));
    return 0;
}