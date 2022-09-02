#include <stdio.h>

int main() {

    char h = 'h';

    char *m = "hello";  // 如果两个字符串内容一致，指针会指向同一个地址
    char *s = "hello"; 
    // 在编译的时候 编译器会将字符串放入代码段，并且设置为只读
    // 写法等价于 const char *s = "hello";
    // s[2] = 'x'; 会报错


    // 如果想要修改数组 应该用数组的方式定义数组
    char s2[] = "hello";
    s2[2] = 'x';

    printf("s %p\n", s);
    printf("s2 %p\n", s2);
    // printf("m %p\n", m);
    // printf("m %c\n", *m);
    // printf("h %p\n", &h);


    return 0;
}