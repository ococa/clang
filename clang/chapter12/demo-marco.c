// # + 语句
// 编译预处理指令, 不是c语言的成分 但是c语言离不开他
// important 预编译语句结尾不带分号
#include <stdio.h>

// PI是预处理的名字 3.1415是值，在编译之前会把程序中的PI替换成3.1415
// 也叫宏
#define PI 3.1415
#define PI2 PI*2 // 宏里可以引用别的宏
// 换行需要加 "\"
#define PRT printf("pi is %f\n", PI); \
            printf("2pi is %f\n", PI2);

int main() 
{
    printf("%f\n", PI);
    PRT;

    // 预定义的宏
    printf("LINE is %d\n", __LINE__);
    printf("FILE is %s\n", __FILE__);
    printf("DATE is %s\n", __DATE__);
    printf("TIME is %s\n", __TIME__);
    return 0;
}



