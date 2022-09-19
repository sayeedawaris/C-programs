// Matrix multiplication generalisation
#include <stdio.h>

int main() {
    int i,j,k,a,sum=0,r1,c1,r2,c2;
    
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d%d",&r1,&c1);
  
    int x[r1][c1];

   printf("Enter elements of Matrix 1\n");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           printf("Enter element number a%d%d: ",i+1,j+1);
           scanf("%d",&x[i][j]);
       }
   }
    printf("Matrix 1 \n");
    for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           printf("%d ",x[i][j]);
       }
       printf("\n");
   }
   
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d%d",&r2,&c2);
    int y[r2][c2];
    int z[r1][c2];
    
    printf("Enter elements of Matrix 2\n ");
    for(i=0;i<r2;i++)
    {
       for(j=0;j<c2;j++)
       {
           printf("Enter element number a%d%d: ",i+1,j+1);
           scanf("%d",&y[i][j]);
       }
    }
    printf("Matrix 2 \n");
    for(i=0;i<r2;i++)
   {
       for(j=0;j<c2;j++)
       {
           printf("%d ",y[i][j]);
       }
       printf("\n");
   }
   
   if(c1==r2)
   {
       for(k=0;k<r1;k++)
        {
            for(i=0;i<c2;i++)
            {
                a=0;
                for(j=0;j<c1;j++)
                {
                    a=x[k][j]*y[j][i];
                    sum=sum+a;
                }
                z[k][i]=sum;
                sum=0;
        }
    }
    
    printf("Multiplication of matrix 1 and matrix 2\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }
    
   }
   else
   {
       printf("Matrix multiplication not possible");
   }

    return 0;
}
