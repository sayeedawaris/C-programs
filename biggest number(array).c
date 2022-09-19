// Biggest number in an array
#include <stdio.h>

int main() {
    int i,max;
    int x[5];
    for(i=0;i<5;i++)
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&x[i]);
    }
    
    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
    
    max=x[0];
    
    for(i=0;i<=4;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }
    printf("\nBiggest number is: %d",max);
    return 0;
}
