// Selection sort
#include <stdio.h>

int main() {
    int i,j,n,min,temp;
    printf("How many numbers are in your array? ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("Your array looks like this: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\nSorting elements: ");
    
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
