#include <stdio.h>


int search(int number, int array[], int length) {
    int ret = -1;
    for (int i = 0; i < length; i++) {
        if (array[i] == number) {
            ret = i;
            break;
        }        
    }
    return ret;
    
}

int main() {
    int a[] = {1, 2, 3, 11, 14, 15, 10};

    int x;
    int location;
    printf("please enter a number: ");

    scanf("%d", &x);
    location = search(x, a, sizeof(a)/sizeof(a[0]));

    if (location != -1) {
        printf("the location of %d is %d", x, location);
    } else {
        printf("the number %d is not exist");
    }

    return 0;
}