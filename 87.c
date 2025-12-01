//Count spaces, digits, and special characters in a string.

/*
Sample Test Case:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/

#include <stdio.h>

int main() {
    char str[100];
    int sp=0, d=0, s=0;

    scanf("%[^\n]", str);  

    for(int i=0; str[i]; i++){
        if(str[i]==' ') sp++;
        else if(str[i]>='0' && str[i]<='9') d++;
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) ;
        else s++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", sp, d, s);
}
