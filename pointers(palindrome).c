// Palindrome using Pointers
#include <stdio.h>

int length(char x[])
{
    int n=0;
    while(x[n]!='\0')
    {
        n=n+1;
    }
    return n;
}

int main() {
    char x[50];
    int ln,flag=0,i;
    printf("Enter string: ");
    scanf("%s",&x);
    
    ln=length(x);
    
    char *p1=&x[0];
    char *p2=&x[ln-1];
    
    for(i=0;i<ln/2;i++)
    {
        if(*p1!=*p2)
        {
            flag=1;
            break;
        }
        p1=p1+1;
        p2=p2-1;
    }
    
    if(flag==1)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
    return 0;
}
