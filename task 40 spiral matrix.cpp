#include <stdio.h>
int main() {
    int n = 4; 
    int matrix[4][4] = {
        {7, 8, 9, 10},
        {6, 1, 2, 11},
        {5, 4, 3, 12},
        {16, 15, 14, 13}
    };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

