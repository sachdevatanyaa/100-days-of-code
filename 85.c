//Reverse a string.

/*
Simple Test Case
Input 1:
abcd
Output 1:
dcba
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int len = 0;
    while(str[len] != '\0') 
        len++;

    for(int i = len - 1; i >= 0; i--)  
        printf("%c", str[i]);

    return 0;
}
