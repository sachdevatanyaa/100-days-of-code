//Remove all vowels from a string.

/*
Sample test case
Input 1:
education
Output 1:
dctn
*/

#include <stdio.h>

int main() {
    char str[100], result[100];
    int k = 0;

    scanf("%s", str);  

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U') {
            result[k++] = ch;
        }
    }

    result[k] = '\0';  
    printf("%s", result);

    return 0;
}

