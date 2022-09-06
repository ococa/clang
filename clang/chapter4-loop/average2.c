#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;
    
    printf("请输入要计算的数字，输入-1代表结束: ");
    scanf("%d", &number);

    while (number != -1) {
        sum += number;
        count ++;
        printf("请输入要计算的数字，输入-1代表结束: ");
        scanf("%d", &number);
    };

    printf("summary is %d, number count is %d", sum, count);
    
    printf("average number is %d",   sum / count);
    printf("average2 number is %f",  1.0 * sum / count);

    return 0;
}