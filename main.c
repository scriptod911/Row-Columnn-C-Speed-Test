#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void traverseRowMajor(int rows, int cols, int arr[rows][cols]) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arr[i][j] += 1; // Dummy operation to prevent loop optimization
        }
    }
}

void traverseColumnMajor(int rows, int cols, int arr[rows][cols]) {
    int i, j;

    for (j = 0; j < cols; j++) {
        for (i = 0; i < rows; i++) {
            arr[i][j] += 1; // Dummy operation to prevent loop optimization
        }
    }
}

void initializeArray(int rows, int cols, int arr[rows][cols], int minVal, int maxVal) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arr[i][j] = (rand() % (maxVal - minVal + 1)) + minVal;
        }
    }
}

void printArray(int rows, int cols, int arr[rows][cols]) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));

    int rows, cols;
    int minVal, maxVal;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the minimum value for initialization: ");
    scanf("%d", &minVal);
    printf("Enter the maximum value for initialization: ");
    scanf("%d", &maxVal);

    int arr[rows][cols];

    initializeArray(rows, cols, arr, minVal, maxVal);

    printf("Original Array:\n");
    printArray(rows, cols, arr);

    clock_t start, end;
    double rowMajorTime, columnMajorTime;

    start = clock();
    traverseRowMajor(rows, cols, arr);
    end = clock();
    rowMajorTime = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    traverseColumnMajor(rows, cols, arr);
    end = clock();
    columnMajorTime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\n");

    printf("Modified Array (Row-Major):\n");
    printArray(rows, cols, arr);
    printf("\n");

    printf("Time taken for row-major order: %.6f seconds\n", rowMajorTime);
    printf("Time taken for column-major order: %.6f seconds\n", columnMajorTime);
}
