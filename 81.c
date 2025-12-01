//Count characters in a string without using built-in length functions.

/*
Sample test Case
Input 1:
Hello
Output 1:
5
*/

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    scanf("%[^\n]", str);   

    for(int i = 0; str[i] != '\0'; i++)
        count++;

    printf("%d", count);

    return 0;
}
