// Matrix Addition
#include <stdio.h>

int main() {
    int i,j,r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int x[r][c],y[r][c];
    printf("Enter elements for Matrix 1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element number a%d%d: ",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    }
    
    printf("Enter elements for Matrix 2:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element number a%d%d: ",i+1,j+1);
            scanf("%d",&y[i][j]);
        }
    }
    
    printf("Matrix 1\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrix 2\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }
    
    printf("\nAddition of Matrix 1 and Matrix 2 is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",x[i][j]+y[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
