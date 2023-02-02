#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    int left = 0;
    int right = size - 1;
    int middle;

    while (left <= right) {
        middle = (left + right) / 2;
        printf("Searching in array: ");
        for (int i = left; i <= right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        if (array[middle] == value) {
            return middle;
        }
        if (array[middle] < value) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }
    return -1;
}


