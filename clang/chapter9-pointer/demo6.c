#include <stdio.h>
#include <stdlib.h>

int main(void) {

    void *p;
    int cnt = 0;

    // 1024 字节 = 1KB => 1024KB => 1MB
    while ((p = malloc(100 * 1024 * 1024))) {
        cnt += 1;
    }
    printf("分配了%d00MB的空间\n", cnt);
    
    return 0;
}