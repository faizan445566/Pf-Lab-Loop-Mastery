#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}

