#include <stdio.h>

int main() {

    int main = 2;
    int *p = &main; // p == 内存地址， *p == 2
    int x = p[0]; // p[0] == 

    printf("%d\n", p);

    printf("%p\n", *p);

    printf("%p\n", p[0]);

    int c[3] = { 1, 2, 3};

    *c = 222;

    printf("c0 =%d\n", c[0]);

    return 0;
}