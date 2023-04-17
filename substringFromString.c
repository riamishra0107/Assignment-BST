#include <stdio.h>

void substring(char str[], char sub[], int start, int len);

int main() {
    char str[100], sub[100];
    int start, len;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the start index and length of the substring: ");
    scanf("%d %d", &start, &len);
    substring(str, sub, start, len);
    printf("The extracted substring is: %s", sub);
    return 0;
}

void substring(char str[], char sub[], int start, int len) {
    int i;
    for (i = 0; i < len && str[start+i] != '\0'; i++) {
        sub[i] = str[start+i];
    }
    sub[i] = '\0';
}
