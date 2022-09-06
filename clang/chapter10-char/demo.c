#include <stdio.h>

int main() {

    char *str = "hello";

    char word[] = "hello";

    char line[10] = "hello";

    for (size_t i = 0; i < 8; i++)
    {
        printf("%c", word[i]);
    }
    

    // printf("length of str = %d\n", sizeof(str));
    // printf("length of word = %d\n", sizeof(word));
    // printf("length of line = %d\n", sizeof(line));

    return 0;
}