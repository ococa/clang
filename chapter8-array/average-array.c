#include <stdio.h>

// 给定一定数量的数字 挑选其中大于其平均数的所有数字

int main()
{
    int x;
    int sum = 0;
    int count = 0;
    int number[100]; // 当输入数字超过100会有问题

    do
    {
        printf("请输入要计算的数字，输入-1代表结束: ");
        scanf("%d", &x);
        if (x != -1)
        {
            number[count] = x;
            sum += x;
            count ++;
        }
    } while (x != -1);
    
    printf("summary is %d, number count is %d\n", sum, count);

    if (count > 0) {
        double dsum = sum;
        printf("average number is %f\n",  dsum / count);
        int i;
        for (i = 0; i < count; i++) {
            if (number[i] > dsum/count) {
                printf("%d\n", number[i]);
            }
        }
    }

    return 0;
}