#include <stdio.h>

// *比 -> 指针变量 -> 存储内存地址
// 1. int *p; 声明一个指针类型的变量
// 2. *p -> 指针对应的变量
// 3. p -> 指针对应的内存地址

// & 用来获取变量对应的指针 -> 内存地址

void f(int *p) {
    // 通过指针 在函数内可以拥有访问（读+写）函数外数据的能力

    printf("p=%p\n", p);
    printf("*p=%d\n", *p); // 读数据

    int k = *p;  // 读数据
    printf("k=%d\n", k);
    *p = 12; // 写数据
    
}

void f2(int p) {
    // 此处仅仅传递了复制过来的值

    printf("&p in f2 = %p\n", &p);
}

int main() {

    int i = 6;

    printf("i=%d\n", i);

    printf("&i=%p\n", &i);
    f(&i);
    f2(i);

    printf("i=%d\n", i);

    return 0;
}


