
#include <stdio.h>

void bubbleSort(int arr[], int n, int iterations) {
    int temp, swapped;

    for (int i = 0; i < iterations && i < n - 1; i++) { // Ensure max iterations don't exceed array length
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // Print array after each iteration
        printf("After iteration %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");

        // If no swapping happened, break early (optimization)
        if (swapped == 0) break;
    }
}

int main() {
    int n, iterations;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of iterations
    printf("Enter the number of iterations: ");
    scanf("%d", &iterations);

    // Perform bubble sort for the given number of iterations
    bubbleSort(arr, n, iterations);

    return 0;
}
