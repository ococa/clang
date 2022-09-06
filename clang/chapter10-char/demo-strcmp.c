#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "world";
    char str2[] = "world";
    char str3[] = "Wxxxx";

    printf("str length %d, str1 length %d\n", strlen(str), strlen(str2));
    printf("str == str2 %d\n", strcmp(str, str2));
    printf("str2 < str3 %d\n", strcmp(str2, str3));

    return 0;
}