#include <stdio.h>
#include <string.h>

int romanToInt(char *s) {
    int i, sum = 0, prev = 0, curr = 0;
    for (i = strlen(s) - 1; i >= 0; i--) {
        switch (s[i]) {
            case 'I':
                curr = 1;
                break;
            case 'V':
                curr = 5;
                break;
            case 'X':
                curr = 10;
                break;
            case 'L':
                curr = 50;
                break;
            case 'C':
                curr = 100;
                break;
            case 'D':
                curr = 500;
                break;
            case 'M':
                curr = 1000;
                break;
        }
        if (curr < prev) {
            sum -= curr;
        } else {
            sum += curr;
        }
        prev = curr;
    }
    return sum;
}

int main() {
    char romanNum[100];
    printf("Enter a Roman numeral: ");
    scanf("%s", romanNum);
    int integerNum = romanToInt(romanNum);
    printf("The integer value of %s is %d\n", romanNum, integerNum);
    return 0;
}
\
