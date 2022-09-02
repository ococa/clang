#include <stdio.h>
#include <string.h>

int mylen(const char *s) {

    int idx = 0;

    while (s[idx] != '\0') {
        idx++;
        /* code */
    }

    return idx;
}

int main(void) {

    char str[] = "hello world";

    // 1. 获取数组的长度
    // size_t strlen(const char *s);
    size_t length = strlen(str);
    int length2 = mylen(str);

    printf("length of str is %d\n", length); // 11 
    printf("length2 of str is %d\n", length2); // 11 

    // 12 sizeof 会计算字符串存储过程中数组结尾0占用的空间
    printf("size of str is %d\n", sizeof(str)); 

    return 0;
}