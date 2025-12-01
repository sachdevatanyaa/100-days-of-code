//Rotate an array to the right by k positions.

/*
Sample Test Case
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/

#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    printf("Array after rotation: ");

    for(i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for(i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
