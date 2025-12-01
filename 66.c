//Insert an element in a sorted array at the appropriate position.


/*
Sample test case
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/

#include <stdio.h>

int main() {
    int n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1];  

    printf("Enter %d elements in sorted order: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter element to insert: ");
    scanf("%d", &key);
    
    i = n - 1;
    while(i >= 0 && arr[i] > key) {
        arr[i+1] = arr[i]; 
        i--;
    }

    arr[i+1] = key; 
    n++; 

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
