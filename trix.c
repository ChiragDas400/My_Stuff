#include <stdio.h>
#define size 10

int main() {
    FILE *fp;
    int i, j, rows, cols;
    int a[size][size], b[size][size], dif[size][size];

    fp = fopen("mtx.txt.txt", "r");
    if (fp == EOF) {
        printf("Error opening file.\n");
        return 1;
    }

    fscanf(fp, "%d\n", &rows);
    fscanf(fp, "%d\n", &cols);

    // Reading and printing Matrix A
    printf("Matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            fscanf(fp, "%d", &a[i][j]);
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Reading and printing Matrix B
    printf("Matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            fscanf(fp, "%d", &b[i][j]);
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Calculating and printing the Sum Matrix
    printf("Dif Matrix (A + B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            dif[i][j] = a[i][j] - b[i][j];
            printf("%d\t", dif[i][j]);
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}

