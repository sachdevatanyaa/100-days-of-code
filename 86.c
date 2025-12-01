//Check if a string is a palindrome.

/*
Simple Test case
Input 1:
madam
Output 1:
Palindrome
Input 2:
hello
Output 2:
Not palindrome
*/

#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    int i = 0, j = 0;
    while(str[j] != '\0') j++; 
    j--;  
    
    int palindrome = 1;
    while(i < j) {
        if(str[i] != str[j]) {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
