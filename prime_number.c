// Check whether a number is prime or not
#include <stdio.h>

int main() {
    int n,i, flag=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    
    if(flag==0)
    {
        printf("The entered number is not prime");
    }
    else
    {
        printf("The entered number is prime");
    }
    return 0;
}
