// Printing elements of an array using pointers
#include <stdio.h>

int main() {
    int i,n;
    printf("How many elements are in you array? ");
    scanf("%d",&n);
    
    int arr[n];
    int *p=&arr[0];
    
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Elements of your array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*p);
        p+=1;
    }

    return 0;
}
