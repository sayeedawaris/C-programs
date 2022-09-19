// Bubble sort
#include <stdio.h>

int main() {
    int i,j,n,temp;
    printf("How many numbers are in your array? ");
    scanf("%d",&n);
    int x[n];
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(x[j]>=x[j+1]) // for descending order put <= sign
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("\nSorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}
