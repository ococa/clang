#include <stdio.h>
// c语言文件相互引用


int main(int argc, char const argv[])
{
    int a = 5; 
    int b = 6;
    printf("max is %d\n", max(a, b));

    return 0;
}

