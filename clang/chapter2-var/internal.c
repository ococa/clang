/**
 * @file internal.c
 * 输入两个时间 计算时间差
 */
#include <stdio.h>

int main()
{
    int hour1, minutes1;
    int hour2, minutes2;

    scanf("%d %d", &hour1, &minutes1);
    scanf("%d %d", &hour2, &minutes2);

    int interval = hour2 * 60 + minutes2 - (hour1 * 60 + minutes1);

    printf("时间差是%d分钟。即%d小时，%d分钟", interval, interval / 60, interval % 60);
    return 0;
}