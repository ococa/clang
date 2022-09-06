#include <stdio.h>

int main() {
    int a = 6;

    printf("%ld\n", sizeof(double));
    printf("%ld\n", sizeof(a));
    printf("size of char=%ld\n", sizeof(char));
    printf("size of short=%ld\n", sizeof(short));
    printf("size of int =%ld\n", sizeof(int));
    printf("size of long=%ld\n", sizeof(long));
    printf("size of long long=%ld\n", sizeof(long long));
    
    return 0;

}