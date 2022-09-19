// Transpose;
#include <stdio.h>

int main() {
    int i,j,x[3][3]={5,1,6,2,9,3,4,7,8},t[3][3];
    printf("Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    printf("Transpose\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t[i][j]=x[j][i];
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
