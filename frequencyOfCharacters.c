#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int len = strlen(str);
    int freq[26] = {0};
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] - 'A']++;
        }
    }
    printf("Frequency of characters:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i + 'a', freq[i]);
        }
    }
    return 0;
}
