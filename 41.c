//Write a program to swap the first and last digit of a number.

/*
Sample Test case
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, num, digits = 0, firstDigit, lastDigit, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    lastDigit = n % 10;

    while (num >= 10) {
        num /= 10;
        digits++;
    }
    firstDigit = num;

    if (digits == 0) {
        printf("%d\n", n);
        return 0;
    }

    int middle = n % (int)pow(10, digits);  
    middle = middle / 10;                  

    result = lastDigit * (int)pow(10, digits) + middle * 10 + firstDigit;

    printf("%d\n", result);

    return 0;
}
