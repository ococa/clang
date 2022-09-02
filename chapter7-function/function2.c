#include <stdio.h>

void cheer(int i) {
    printf("cheer %d\n", i);
}

int main() {
    // 在c语言中当传入的数据类型和声明的数据类型不同的时候，
    // 编译器会自动进行数据类型转换
    // 在c++， java中则不行
    cheer(2.4);

    double f = 2.2;
    cheer(f);

    return 0;
}