//Check if a matrix is symmetric.


/*
Sample Test case
Input 1:
2 2
1 2
2 1
Output 1:
True
Input 2:
2 2
1 0
2 1
Output 2:
False
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);   

    int a[10][10];
    int symmetric = 1;  

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric)
            break;
    }

    if(symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
