#include <stdio.h>

int main() {
    int row, col;
    printf("Enter the array's row size: ");
    scanf("%d", &row);
    
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int a[row][col];

    printf("Enter array's elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int rowNum, colNum;
    
    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    int rowSum = 0;
    printf("Elements of row %d: ", rowNum);
    for (int j = 0; j < col; j++) {
        printf("%d", a[rowNum][j]);
        rowSum += a[rowNum][j];
        if (j < col - 1) printf(", ");
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    int colSum = 0;
    printf("Elements of column %d: ", colNum);
    for (int i = 0; i < row; i++) {
        printf("%d", a[i][colNum]);
        colSum += a[i][colNum];
        if (i < row - 1) printf(", ");
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}
