// Finding an element in an array
#include <stdio.h>

int main() {
    int i,n,flag=0;
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
    printf("\nEnter the number whose location you want to find: ");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(x[i]==n)
        {
            printf("\nEnter number found at position %d",i+1);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Number not found");
    }
    return 0;
}
