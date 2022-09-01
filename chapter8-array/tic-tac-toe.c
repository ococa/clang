/**
 * 0 0 0 
 * 1 1 1
 * 0 1 0 
 * 通过判断目前有三个连续的数字则为获胜的一方
 */
#include <stdio.h>

void judge(int squares[3][3], int size) {
    int i,j;
    int num0fx; // x -> 1
    int num0f0; // y -> 0
    int result = -1; // -1 没人赢， 1： x赢， 0： y赢

      // 检查行
    for (i = 0; i < size; i++) {
        num0f0 = num0fx = 0;
        for (j = 0; j < size; j++) {
            if (squares[i][j] == 1) {
               num0fx += 1;
            } else {
                num0f0 += 1;
            }    
        }
        if (num0fx == size) {
            result = 1;
        } 
        if (num0f0 == size) {
            result = 0;
        }
    }
    
    
    // 检查列
    for (j = 0; j < size; j++) {
        num0f0 = num0fx = 0;
        for (i = 0; i < size; i++) {
            if (squares[i][j] == 1) {
                num0fx += 1;
                /* code */
            } else {
                num0f0 += 1;
            }
        }
        if (num0fx == size) {
            result = 1;
        } 
        if (num0f0 == size) {
            result = 0;
        }
    }
    

    // 检查正对角线
    num0f0 = num0fx = 0;
    for (i = 0; i < size; i++) {
        if (squares[i][i] == 1) {
            num0fx += 1;
        } else {
            num0f0 += 1;
        }
        if (num0fx == size) {
            result = 1;
        } 
        if (num0f0 == size) {
            result = 0;
        }
    }
    

    // 检查负对角线
    num0f0 = num0fx = 0;
    for (i = 0; i < size; i++) {
        if (squares[i][size - 1 - i] == 1) {
            num0fx += 1;
        } else {
            num0f0 += 1;
        }
        if (num0fx == size) {
            result = 1;
        }
        if (num0f0 == size) {
            result = 0;
        }
    }
    printf("0: %d, 1: %d, result:%d\n", num0f0, num0fx, result);

    if (result == -1) {
        printf("打了个平手");
        /* code */
    } else if (result == 1) 
    {
        printf("1赢了");
        /* code */
    }  else {
        printf("0赢了");
    }
}

int main() {
    const int size = 3;
    int squares[3][3] = {
        { 0, 1, 1 },
        { 0 ,1, 1 },
        { 0, 0, 0 }
    };

 
    // 读入矩阵
    // for (int i = 0; i < size; i++) {
        // for (j = 0; j < size; j++) {
            // scanf("%d", squares[i][j]);
        // }
    // }
    judge(squares, size);
  
    return 0;
}

