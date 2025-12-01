//Find the digit that occurs the most times in an integer number.

/*
Sample Test case
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main() {
    long num;
    int count[10] = {0}; 
    int maxCount = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if (num < 0)  
        num = -num;

    while (num > 0) {
        int d = num % 10;
        count[d]++;
        num /= 10;
    }


    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            digit = i;
        }
    }

    printf("%d\n", digit);

    return 0;
}
