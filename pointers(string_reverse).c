// Reversing string using pointers
#include <stdio.h>

int main() {
    char s[]="Hello_sayeeda";
    int i,n=0;

    while(s[n]!='\0')
    {
        n=n+1;
    }
    char *p=&s[n-1];
    
    for(i=n-1;i>=0;i--)
    {
        printf("%c",*p);
        p--;
    }

    return 0;
}
