// string length
#include <stdio.h>
int length(char x[]);
int main() {
    char x[50];
    int ln;
    printf("Enter string: ");
    scanf("%s",&x);
    
    ln=length(x);
    printf("Lenth is %d",ln);
    return 0;
}

int length(char x[])
{
    int n=0;
    while(x[n]!='\0')
    {
        n=n+1;
    }
    return n;
}
