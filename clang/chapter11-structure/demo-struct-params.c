#include <stdio.h>

struct date 
{
    int year;
    int mouth;
    int day;
    /* data */
};



// struct 作为函数参数 
// 会复制函数的参数， c语言在函数调用中是传值的，数组例外
int f(struct date d) 
{

}





int main(int argc, char const *argv[]) 
{
    // 复杂结构传参推荐传递结构的指针
    // 指向结构的指针
    struct date myday = { .day = 12, };
    printf("p.day is %i\n", myday.day);

    struct date *p = &myday;

    (*p).day = 123;
    printf("p.day is %i\n", myday.day);

    printf("p is %p, %d\n", p, p);
    printf("p is %p, %d\n", *p, *p);
    printf("myday is %p, %d\n", &myday, &myday);
    p->day =1233;
    printf("p.day is %i\n", myday.day);

    return 0;
}