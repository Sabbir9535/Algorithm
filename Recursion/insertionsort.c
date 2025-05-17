#include <stdio.h>

void insertionsort(int arr[], int size) {
    int i, j, key;

    for (j = 1; j < size; j++) {
        key = arr[j];
        i = j - 1;

        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }

    // Print sorted array
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {11, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, size);

    return 0;
}
