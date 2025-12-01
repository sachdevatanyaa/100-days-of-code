//Find the longest word in a sentence.

/*
Sample Tets Case
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[100], longest[100];
    int maxLen = 0, len;

    scanf("%[^\n]", str); 

    char *token = strtok(str, " ");  
    while(token != NULL) {
        len = strlen(token);
        if(len > maxLen) {
            maxLen = len;
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }

    printf("%s", longest);
    return 0;
}
