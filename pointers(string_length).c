// Checking length of string input by user using pointers 
#include <stdio.h>

int main() {
    int i,l=0;
    char s[50];
    
    printf("Enter string ");
    scanf("%s",&s);
    
    int *ln=&l;
    
    char *p=&s[0];
    
    while(*p!='\0')
    {
        *ln+=1;
        p++;
    }
    
    printf("length of your string is: %d ",*ln);
    
    return 0;
}
