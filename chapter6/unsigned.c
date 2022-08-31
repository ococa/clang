#include <stdio.h>

int main() {

    char a = 128;
    unsigned char b = 128;

    printf("%d, %d\n", a, b);

    char c = a + b;

    printf("c=%d", c);
    return 0;

}