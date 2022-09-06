#include <stdio.h>

int main()
{
    int cm;
    scanf("%d", &cm);

    float temp = cm / 30.48;
    int foot = (temp);
    int inch = ((temp - foot)* 12);

    printf("%d %d", foot, inch);
    return 0;


}