//Count vowels and consonants in a string.

/*
Sample Test Case
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/

#include <stdio.h>

int main() {
    char str[100];
    int v = 0, c = 0;

    scanf("%s", str);   

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            v++;
        else
            c++;
    }

     printf("Vowels=%d, Consonants=%d", v, c);
    return 0;
}