#include <stdio.h>

// 一百以内的素数

int main() {

    int x;

    for (x = 1; x <= 100; x++) {
        int isPrime = 1;
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", x);
        }
    }

}