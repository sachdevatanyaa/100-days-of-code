//Write a program to find the product of odd digits of a number.


/*
Sample test case
Input 1:
12345
Output 1:
15 (1*3*5)
Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;   
        if (digit % 2 != 0) {   
            product *= digit;
            foundOdd = 1;
        }
        n = n / 10;   
    }

    if (foundOdd == 0)
        product = 1;   

    printf("Product of odd digits = %d", product);

    return 0;
}
