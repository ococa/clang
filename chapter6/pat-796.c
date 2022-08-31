#include <stdio.h>

int main() {

    int A;
    int count = 0;

    scanf("%d", &A);

    int a = A;

    for (int i = a; i < a + 4 ; ++i) {
        for (int m = a; m < a + 4; ++m) {
            if(m == i) {
                continue;
            }
            for (int j = a; j < a + 4; ++j) {
                if(j == m || j == i) {
                    continue;
                }
                count ++;
                printf("%d%d%d ", i, m, j);
                if(count % 6 == 0) {
                    printf("\n");
                }
            }
        }
    }
    
}