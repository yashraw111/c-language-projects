#include <stdio.h>

int main() {
    int row, col;
    
    printf("Enter the array’s row size: ");
    scanf("%d", &row);
    
    printf("Enter the array’s column size: ");
    scanf("%d", &col);

    int a[row][col];

    printf("Enter array's elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", max);

    return 0;
}
