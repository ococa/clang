#include <stdio.h>

// 判断整数有多少位
int main()
{
    int n;
    int length;
    
    scanf("%d", &n);

    int t = 10;
    int temp = n;

    while (temp > 0)
    {
        temp = temp / 10;
        length ++;
            /* code */
    }

    printf("length=%d", length);
    return 0;
}