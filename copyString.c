#include <stdio.h>

void stringCopy(char *src, char *dest) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char source[100], destination[100];
    printf("Enter the source string: ");
    scanf("%[^\n]s", source);

    stringCopy(source, destination);

    printf("Source String: %s\n", source);
    printf("Destination String: %s\n", destination);

    return 0;
}
