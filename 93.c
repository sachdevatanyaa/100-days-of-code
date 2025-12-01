//Check if two strings are anagrams of each other.

/*
Sample Test Case
Input 1:
listen
silent
Output 1:
Anagrams
Input 2:
hello
world
Output 2:
Not anagrams
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26]={0}, freq2[26]={0};

    scanf("%s %s", str1, str2);

    for(int i=0; str1[i]!='\0'; i++)
        freq1[str1[i]-'a']++;

    for(int i=0; str2[i]!='\0'; i++)
        freq2[str2[i]-'a']++;

    int anagram = 1;
    for(int i=0;i<26;i++) {
        if(freq1[i]!=freq2[i]) {
            anagram=0;
            break;
        }
    }

    if(anagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
