//Multiply two matrices.

/*
Sample Test Case
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154
*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);

    int a[10][10], b[10][10], r[10][10];

    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    scanf("%d %d",&r2,&c2);

    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

    if(c1!=r2) return 0;

    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++) {
            r[i][j]=0;
            for(int k=0;k<c1;k++)
                r[i][j]+=a[i][k]*b[k][j];
        }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
            printf("%d ",r[i][j]);
        printf("\n");
    }
}
