#include <stdio.h>

// Structure to store minimum and maximum
struct MinMax {
    int min;
    int max;
};

// Function to find Min and Max using Divide and Conquer
struct MinMax findMinMax(int arr[], int low, int high) {
    struct MinMax result, left, right;

    // If the array has only one element
    if (low == high) {
        result.min = arr[low];
        result.max = arr[low];
        return result;
    }

    // If the array has two elements
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result.min = arr[low];
            result.max = arr[high];
        } else {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }

    // Divide the array into two halves
    int mid = (low + high) / 2;

    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    // Find final min and max
    result.min = (left.min < right.min) ? left.min : right.min;
    //or

    // if (left.min < right.min) {
    //     result.min = left.min;
    // } else {
    //     result.min = right.min;
    // }
    


    result.max = (left.max > right.max) ? left.max : right.max;

    //or 
    // if (left.max > right.max) {
    //     result.max = left.max;
    // } else {
    //     result.max = right.max;
    // }
    
    return result;
}

int main() {
    int arr[] = {12, 5, 7, 9, 15, 3, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    struct MinMax result = findMinMax(arr, 0, n - 1);

    printf("Minimum Element: %d\n", result.min);
    printf("Maximum Element: %d\n", result.max);

    return 0;
}
