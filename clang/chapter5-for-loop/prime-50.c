#include <stdio.h>

// 前五十个素数
int main() {

    int x = 1;
    int count = 0;

    while (count < 50) {

        int isPrime = 1;
        // int i;
        for (int i = 2; i < x; i++) {
            if (x % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
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