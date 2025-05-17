#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionsort(int arr[], int size) {
    int i, j, key;

    for (j = 1; j < size; j++) {
        key = arr[j];
        i = j - 1;

        printf("\nStep = %d\n", j);
        printf("Key = %d\n", key);

        // Show shifting steps
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];

            // Print after each shift
            printArray(arr, size);

            i = i - 1;
        }

        arr[i + 1] = key;

        // Final insert position
        printArray(arr, size);
    }
}

int main() {
    int arr[] = {2,4,0,1,2,1,0,2,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, size);

    return 0;
}
