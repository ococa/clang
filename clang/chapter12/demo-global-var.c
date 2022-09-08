#include <stdio.h>

// 静态本地变量 static [type] 变量名
// 全局变量 ：函数外面声明的变量是全局变量
// 静态本地变量 存储位置和全局变量一样，本质上是生命在函数内部的全局变量。
// 静态变量有全局生存期 本地作用域

int globalA = 0;

int f() {
    static int staticA = 0;
    int localA = 0;
    globalA +=1 ;
    staticA += 1;
    localA += 1;

    printf("globalA is %d, localA is %d, staticA is %d\n", globalA, localA, staticA);

    return staticA;
}

int main()
{

    f();
    f();
    f();

    return 0;
}