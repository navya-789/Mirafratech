#include <stdio.h>

int main() {
    int c = 0;
    char ch, i;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        for (i = 'a'; i <= 'z'; i++) {
            c++;
            if (i == ch || i == ch - 32) {
                break;
            }
        }
    }

    printf("%c is at position %d in the alphabet\n", ch, c);

    return 0;
}

