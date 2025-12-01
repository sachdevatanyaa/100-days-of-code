//Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test case
Input 1:
1010
Output 1:
0101
Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>

int main() {
    long binary, num, remainder, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    num = binary;

    while (num > 0) {
        remainder = num % 10;

        if (remainder == 0)
            remainder = 1;
        else
            remainder = 0;

        complement = complement + remainder * place;
        place *= 10;
        num /= 10;
    }

    printf("1's complement: %ld\n", complement);

    return 0;
}
