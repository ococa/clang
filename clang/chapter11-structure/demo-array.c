#include <stdio.h>

// 结构数组

struct date
{
    int mouth;
    int day;
    int year;
};

// 嵌套的结构
struct dateAndTime 
{
    struct date date;
    int time;
};


int main(int argc, char const *argv[])
{
    struct date dateArray[] = {
        {1, 2, 3}, { 2, 2, 3}
    };
    

}