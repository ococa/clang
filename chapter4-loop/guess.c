#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num = rand()%100 + 1;
    int count = 0;
    int inputNum;

    printf("我已经想好一个100以内的数字 %d", num);

    do
    {
        printf("请猜猜");
        scanf("%d", &inputNum);
        count ++;
        printf("inputNumber: %d, num: %d \n", inputNum, num);

        if (inputNum < num)
        {
            printf("too small.");
        } else if (inputNum > num)
        {
            printf("too large. ");
        }
    } while (inputNum != num);
    


    printf("congratulations, you are right with %d times", count);
    return 0;
}