#include <stdio.h>

int main(int argc, char const *argv[]) {

    int ch;

    // windows下 ctrl + z == EOF
    // unix   下 ctrl + d == EOF
    while ((ch = getchar()) != EOF) {
        printf("==");
        putchar(ch);
    }
    

    printf("eof\n");
    return 0;
    
}
