#include <stdio.h>

int main() {

    char ac[] = { 0, 1, 2, 3, 4,5, 6, 7, 8, 9 ,};
    // char一个字节

    char *p = ac;

    printf("*p is %d\n", *p);
    printf("*(p + 1) is %d\n", *(p+1));

    printf("p = %p \n", p);
    printf("p + 1= %p \n", p + 1);

    int ab[] = { 0, 1, 2, 3, 4, 5};
    // int四个字节
    
    int *q = ab;

    printf("q = %p \n", q);
    printf("q + 1= %p \n", q + 1);

    printf("*(q + 1) is %d\n", *(q+1));


    printf("sizeof char %d\n", sizeof(char));
    printf("sizeof int %d\n", sizeof(int));

    return 0;
}