/**
 * 用户输入数量不确定的【0，9】范围内的整数，统计每一种数字出现的次数，输入-1表示结束
 */
#include <stdio.h>

int main() {
    
    int counts[10];
    int x;

    scanf("%d", &x);

    for (int i = 0; i < 10; i++) {
        counts[i] = 0;
    }
    

    while (x != -1)
    {
        if (x >= 0 && x <= 9) {
            counts[x] = counts[x] += 1;
        }
        scanf("%d", &x);
    }

    
    for (int i = 0; i < 10; i++) {
        printf("number %d show %d times.\n", i, counts[i]);
    }

    return 0;
}