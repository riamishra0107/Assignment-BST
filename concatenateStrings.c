#include <stdio.h>

void concat(char[], char[]);

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    concat(s1, s2);
    printf("Concatenated string: %s", s1);
    return 0;
}

void concat(char s1[], char s2[]) {
    int i, j;
    i = strlen(s1);
    for (j = 0; s2[j] != '\0'; i++, j++) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
}
