//C program to compare three distinct integers
#include <stdio.h>

int main() 
{
    int a,b,c;
    printf("Enter First distinct integers: ");
    scanf("%d", &a);
    printf("Enter Second distinct integers: ");
    scanf("%d", &b);
    printf("Enter Third distinct integers: ");
    scanf("%d", &c);
    if(a>b && a>c)
    {
     printf("%d is greatest", a);
    }
    else if(b>a && b>c)
    {
     printf("%d is greatest", b);
    }
    else
    {
     printf("%d is greatest", c);
    }
    return 0;
}
