//Write a program to check if a number is an Armstrong number.

/*
Sample Test case
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>

int main() {
    int n, original, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;   
        n /= 10;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
