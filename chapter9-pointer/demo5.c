#include <stdio.h>
#include <stdlib.h>

// 动态内存分配
// c99之前数组长度只能是数字不能是变量的值
// 通过malloc来实现运行时获取连续内存空间来当作数组
int main() {
    
    int number;
    int *a;
    int i;

    printf("输入数量：");
    scanf("%d", &number);

    // int a[number]; c99
    a =  (int*)malloc(number*sizeof(int));

    for (i = 0; i < number; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = number-1; i >= 0; i--) {
        printf("%d\n", a[i]);
    }

    free(a);

    return 0;
}