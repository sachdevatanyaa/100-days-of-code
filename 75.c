//Add two matrices.

/*
Sample Test Case 
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12
*/

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[10][10], b[10][10], sum[10][10];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
