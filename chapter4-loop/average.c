#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;

    do
    {
        printf("请输入要计算的数字，输入-1代表结束: ");
        scanf("%d", &number);
        if (number != -1)
        {
            sum += number;
            count ++;
        }
    } while (number != -1);

    printf("summary is %d, number count is %d", sum, count);
    
    double dsum = sum;
    printf("average number is %f",  dsum / count);

    return 0;
}