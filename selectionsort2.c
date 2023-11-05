#include <stdio.h>

int main() {
    int n, i, j, min, temp;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];

    // Enter array elements
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Elements need to be sorted
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) { // Change '>' to '<' here
            if (a[j] < a[min]) {
                min = j;
            }
        }
        // Swap a[i] and a[min]
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    // Sorted array is
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]); // Added space to separate elements
    }
    printf("\n");

    return 0;
}
