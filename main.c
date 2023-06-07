#include <stdio.h>
#include <stdlib.h>
#include <time.h> // to test speed (obv)

#define ROWS 3
#define COLS 4

void traverseRowMajor(int arr[ROWS][COLS]) {
    int i, j;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            arr[i][j] += 1; // prevent loop op
        }
    }
}

void traverseColumnMajor(int arr[ROWS][COLS]) {
    int i, j;

    for (j = 0; j < COLS; j++) {
        for (i = 0; i < ROWS; i++) {
            arr[i][j] += 1; // prevent loop op
        }
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    clock_t start, end;
    double rowMajorTime, columnMajorTime;

    start = clock();
    traverseRowMajor(arr);
    end = clock();
    rowMajorTime = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    traverseColumnMajor(arr);
    end = clock();
    columnMajorTime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time taken for row-major order: %.6f seconds\n", rowMajorTime);
    printf("Time taken for column-major order: %.6f seconds\n", columnMajorTime);
}
