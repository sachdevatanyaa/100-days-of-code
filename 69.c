//Find the second largest element in an array.

/*
Sample test case
Input 1:
5
10 20 30 40 50
Output 1:
40
*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    second = arr[0]; 
    for(i = 0; i < n; i++) {
        if(arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    printf("Second largest element: %d\n", second);

    return 0;
}
