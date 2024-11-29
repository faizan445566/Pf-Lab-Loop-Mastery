#include <stdio.h>
int main() {
    int n = 5; 
    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("%d", num++);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

