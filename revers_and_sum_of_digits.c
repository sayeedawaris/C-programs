// Reverse of digits and sum of digits
#include <stdio.h>

int main() {
    int i,j,n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        j=n%10;
        printf("%d",j);
        n=n/10;
        sum=sum+j;
    }
    printf("\nThe sum of digits is equal to: %d",sum);
    return 0;
}
