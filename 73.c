//Find the sum of each row of a matrix and store it in an array.


/*
Sample Test Case
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols + 1];  
    
    for(i = 0; i < rows; i++) {
        int sum = 0;
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
        arr[i][cols] = sum;  
    }

    for(i = 0; i < rows; i++) {
        printf("%d ", arr[i][cols]);
    }

    return 0;
}
