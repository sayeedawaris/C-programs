// WAP in C to find sum of integers, the integers should be input by the user.
#include <stdio.h>

int main() {
    int i,n,num,sum=0;
    printf("How many numbers do you want to add?\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("Enter number: ");
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("sum is equal to %d", sum);
    return 0;
}
