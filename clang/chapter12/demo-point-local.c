// 返回本地变量的地址是一件危险的事情
#include <stdio.h>

int *f(void) {
    int a = 12;
    return &a;
}

int g() {
    int k = 2343;
    return k;
}

int main() 
{
    int *p = f();

    printf("*p's value is %p\n", *p);
    printf("*p's value is %p\n", p);

    g();
    // printf("*p's value is %d\n", *p);
    return 0;
}
// 不要使用全局变量在函数间传递参数和结果
// 尽量避免使用全局变量
// 使用全局变量和静态本地变量的函数是线程不安全的
//