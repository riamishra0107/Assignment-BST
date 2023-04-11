#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, flag = 0;

    printf("Enter first string: ");
    scanf("%[^\n]%*c", str1);

    printf("Enter second string: ");
    scanf("%[^\n]%*c", str2);

    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
