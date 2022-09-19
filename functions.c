// Functions
#include <stdio.h>
int sub(int,int); // Function declaration

float divide(int,int);

int add(int x,int y) // Function declaration and definition
    {
        int z;
        z=x+y;
        return z;
    }
int main() {
    int x,y,c; float s;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    
    c=add(x,y);
    printf("The sum is %d\n",c);
    
    c=sub(x,y);
    printf("Difference is %d\n",c);
    
    s=divide(x,y);
    printf("%d / %d is %f\n",x,y,s);
    
    return 0;
}

int sub(int a,int b) // definition
{
    int c;
    c=a-b;
    return c;
}

float divide(int x, int y)
{
    float z;
    z=(float)x/y;
    return z;
}
