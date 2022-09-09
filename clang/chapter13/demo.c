#include <stdio.h>

int main(int argc, char const *argv[]) {

    // 在代码中读写文件
    // r  只读
    // r+ 读写 从头开始
    // w  只写，不存在则新建 存在则清空
    // w+ 读写 不存在则新建 存在则清空
    // a  追加 不存在则新建 存在则从文件尾开始
    // (..)x 
    FILE* fp = fopen("demo.in", "r+");

    if (fp) {
        int num;
        fscanf(fp, "%d", &num);
        fprintf(fp, "\n%d", num + 1);
        printf("%d", num);
        fclose(fp);
    } else {
        printf("无法打开文件");
    }
    

    // printf("!23123;");
    return 0;
}


// 程序的输入scanf 输出 printf
// 在执行过程中 可以通过 > < 实现指定文件输入输出数据
