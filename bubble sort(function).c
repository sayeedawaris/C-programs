// Sorting array using function
#include <stdio.h>
void sort(int a[],int n);

int main() {
    int i,n,c;
    printf("Enter number of elements in: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array");
    for(i=0;i<n;i++)
    {
        printf("enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    
    return 0;
}

void sort( int x[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("Sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d",x[i]);
    }
 
}
