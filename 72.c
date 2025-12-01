//Find the sum of all elements in a matrix.

/*
Sample test case
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
*/
 
 #include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];   
        }
    }

    printf("%d", sum);

    return 0;
}
