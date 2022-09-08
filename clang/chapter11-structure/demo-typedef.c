// 自定义数据类型
#include <stdio.h>

// typede 原类型名 新类型名
typedef int Length;

// 简化的struct date 的使用方式
typedef struct date
{
    int year;
    int mouth;
    int day;
} Date;

// 匿名缩写方式
typedef struct 
{
    int year;
    int mouth;
    int day;
} Date2;


int main() {
    Length a = 1;
    Date date = { 2009, 12, 9 };

    printf("date is %i-%i-%i\n", date.year, date.mouth, date.day);
    printf("a is %d\n", a);

    return 0; 
}