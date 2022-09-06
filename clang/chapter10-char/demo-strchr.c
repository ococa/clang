#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char s[] = "attow";

    char *p = strchr(s, 'o'); // 获取attow中第一个o的指针

    char temp = *p;
    *p = '\0';

    // 复制修改后的s字符串 att
    char *t = (char*)malloc(strlen(s) + 1);
    strcpy(t, s);
    
    *p = temp;

    printf("t result: %s\n", t);
    free(t); // ****important***** 记得释放

    return 0;
}