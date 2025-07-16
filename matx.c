#include <stdio.h>
#define size 10

// Change return type to void since it's only displaying
void displaymatrix(int mat[size][size], int rows, int cols);

int main() {
    int a[size][size], b[size][size];
    int row1, row2, col1, col2, i, j;

    printf("Enter the number of rows of first matrix:\n");
    scanf("%d", &row1);
    printf("Enter the number of columns of first matrix:\n");
    scanf("%d", &col1);

    printf("Enter the number of rows of second matrix:\n");
    scanf("%d", &row2);
    printf("Enter the number of columns of second matrix:\n");
    scanf("%d", &col2);

    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nFirst Matrix (%dx%d):\n", row1, col1);
    displaymatrix(a, row1, col1);

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSecond Matrix (%dx%d):\n", row2, col2);
    displaymatrix(b, row2, col2);

    return 0;
}

void displaymatrix(int mat[size][size], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

