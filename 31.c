//Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test case
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/

#include <stdio.h>

int main() {
    int n, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int num = n;  
    
    while (n > 0) {
        int bit = n % 2;       
        binary = bit * place + binary; 
        place *= 10;           
        n /= 2;                
    }

    printf("Binary representation of %d is: %d\n", num, binary);

    return 0;
}
