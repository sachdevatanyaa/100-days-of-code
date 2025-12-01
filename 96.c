//Reverse each word in a sentence without changing the word order.

/*
Sample test case
Input 1:
I love coding
Output 1:
I evol gnidoc
*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);  

    char word[100];
    int k = 0;

    for(int i = 0; ; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            word[k] = '\0'; 
            
            for(int j = k-1; j >= 0; j--)
                printf("%c", word[j]);
            if(str[i] == ' ')
                printf(" ");  
            k = 0;  
            if(str[i] == '\0') break;
        } else {
            word[k++] = str[i];
        }
    }

    return 0;
}
