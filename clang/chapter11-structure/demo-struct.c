#include <stdio.h>

// 结构声明1
struct date
{
    int mouth;
    int day;
    int year;
};

// 结构声明2
struct point 
{
    int x;
    int y;
    /* data */
} p1, p2; 

// 结构声明3
struct 
{
    int x;
    int y;
    /* data */
} p3, p4;

// 结构初始化
struct date date1 = {1, 22, 2008};
struct date date2 = { .mouth = 1, .year = 2009}; // day默认为0



int main(int argc, char const *argv[]) {
    struct date today;

    today.day = 8;
    today.mouth = 31;
    today.year = 2022;
    
    printf("today's date is %i-%i-%i.\n", today.year, today.mouth, today.day);

    struct date *ptoday = &today; // struct结构的地址需要通过&符号获取
    
    printf("today's point is %p\n", *ptoday);

    return 0;
}