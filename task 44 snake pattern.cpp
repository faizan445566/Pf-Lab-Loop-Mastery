#include <stdio.h>
int main() {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= 5; j++) {
                printf("%d ", num++);
            }
        } else {
            int temp = num + 4;
            for (int j = 1; j <= 5; j++) {
                printf("%d ", temp--);
                num++;
            }
        }
        printf("\n");
    }
    return 0;
}

