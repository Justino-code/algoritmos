#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void check(char *a, char *b, int (*cmp)(const char *, const char *));
int numcmp(const char *a, const char *b);

int main() {
    char s1[80], s2[80];

    strcpy(s1, "pedro");
    strcpy(s2, "juo");

    // Verifica se todos os caracteres de s1 são alfabéticos
    if (isalpha(s1[0])) { // Verifica apenas o primeiro caractere
        check(s1, s2, strcmp);
    } else {
        check(s1, s2, numcmp);
    }

    return 0;
}

void check(char *a, char *b, int (*cmp)(const char *, const char *)) {
    if (!(*cmp)(a, b)) {
        printf("iguais\n");
    } else {
        printf("diferentes\n");
    }
}

int numcmp(const char *a, const char *b) {
    if (atoi(a) == atoi(b)) {
        return 0;
    } else {
        return 1;
    }
}

