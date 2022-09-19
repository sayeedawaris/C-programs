// Factorial using functions.
#include <stdio.h>
int factorial(int x)
{
    int i, fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main() {
    int n,fact;
    printf("Enter a number whose factorial you want to find: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is %d",n,fact);

    return 0;
}
