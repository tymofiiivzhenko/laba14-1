#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, d, N;

    printf("Enter the size of the massif: ");
    scanf("%d", &N);

    int* A = (int*)malloc(N * sizeof(int));

    printf("Enter the elements of the massif:\n");
    for (i = 0; i < N; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    int* min = A, * max = A;

    for (i = 1; i < N; ++i) {
        if (A[i] < *min) {
            min = &A[i];
        }
        if (A[i] > *max) {
            max = &A[i];
        }
    }

    d = max - min;

    printf("\nMinimum: %d (%ld)\n", *min, min - A + 1);
    printf("Maximum: %d (%ld)\n", *max, max - A + 1);
    printf("Distance: %d\n", d);

    free(A);

    return 420;
}





