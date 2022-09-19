// Displaying elements of an array in reverse order
#include <stdio.h>

int main() {
    int i;
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
    
    printf("\nReverse order:\n");
    
    for(i=4;i>=0;i--)
    {
        printf("%d ",x[i]);
    }
    return 0;
}
