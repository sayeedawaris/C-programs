// Matrix Multiplication
#include <stdio.h>

int main() {
    int i,j,k,a,sum=0;
    int x[3][3]={1,2,3,4,5,6,7,8,9};
    int y[3][3]={5,1,6,2,9,3,4,7,8};
    int z[3][3];
    printf("Matrix 1\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrix 2\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }
    
   // printf("\n");
    
    for(k=0;k<3;k++)
    {
        for(i=0;i<3;i++)
        {
            a=0;
            for(j=0;j<3;j++)
            {
                a=x[k][j]*y[j][i];
                sum=sum+a;
                
            }
            z[k][i]=sum;
            sum=0;
        }
    }
    printf("Multiplication of matrix 1 and matrix 2\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
