#include <stdio.h>

// 先使用 后声明 编译器回报错, 需要先函数得原型声明
int isPrime(int x);

// 前五十个素数
int main() {

    int x = 1;
    int count = 0;

    while (count < 50) {
        if (isPrime(x)) {
            printf("%d\t", x);
            count++;
            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
        x++;
    }
    

    return 0;
}

int isPrime(int x) {
    int isPrime = 1;
    // int i;
    for (int i = 2; i < x; i++) {
        if (x % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}