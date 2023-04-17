#include <stdio.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    char *start = str;
    char *end = str;
    while (*end != '\0') {
        end++;
        if (*end == ' ' || *end == '\0') {
            reverse(start, end - 1);
            start = end + 1;
        }
    }
    reverse(str, end - 1);
}

int main() {
    char str[] = "I love programming";
    printf("Original String: %s\n", str);

    reverseWords(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
