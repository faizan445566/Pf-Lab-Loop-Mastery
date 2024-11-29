#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}

