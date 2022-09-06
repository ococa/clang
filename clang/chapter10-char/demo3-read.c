#include <stdio.h>

int f(void) {
    char word[4];
    char word2[4];
    scanf("%s", word);
    scanf("%s", word2);
    printf("%s###%s###\n", word, word2);
}

int main(void) {
    f();
    return 0;
}