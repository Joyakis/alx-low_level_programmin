#include <stdio.h>

void print_array(int *array, int left, int right) {
    printf("Searching in array: ");
    for (int i = left; i <= right; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = (left + right) / 2;
        print_array(array, left, right);
        if (array[middle] == value) {
            return middle;
        } else if (array[middle] < value) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

