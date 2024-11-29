#include <stdio.h>
int main() {
    int n = 5; // Number of rows
    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}

