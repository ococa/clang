#include <stdio.h>

int main() {

    int a[10] = { 1 };

    printf("size of a is %d\n", sizeof(a));

    // 计算数组的长度
    printf("length of a is %d\n", sizeof(a) / sizeof(a[0]));

    return 0;
}