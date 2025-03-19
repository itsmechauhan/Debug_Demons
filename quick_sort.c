#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int array[], int low, int high) {
    int pivot = array[high]; // Choosing the last element as pivot
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

// Quick Sort function
void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);

        // Recursively sorting elements before and after partition
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Function to print the array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

// Main function
int main() {
    int data[] = {8, 7, 2, 1, 0, 9, 6};
    int n = sizeof(data) / sizeof(data[0]);
    printf("Unsorted Array: ");
    printArray(data, n);

    quickSort(data, 0, n - 1);

    printf("Sorted Array: ");
    printArray(data, n);

    return 0;
}
