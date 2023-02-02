#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}

