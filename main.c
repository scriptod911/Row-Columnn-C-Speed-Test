#include <stdio.h>

#define ROWS 3
#define COLS 4

void traverseRowMajor(int arr[ROWS][COLS]) {
    int i, j;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

void traverseColumnMajor(int arr[ROWS][COLS]) {
    int i, j;

    for (j = 0; j < COLS; j++) {
        for (i = 0; i < ROWS; i++) {
            printf("%d ", arr[i][j]);
        }
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("Row-Major Traversal:\n");
    traverseRowMajor(arr);

    printf("\n\n");

    printf("Column-Major Traversal:\n");
    traverseColumnMajor(arr);
}
