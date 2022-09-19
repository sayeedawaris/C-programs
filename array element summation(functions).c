// Array element summation using functions
#include <stdio.h>
int asum(int a[]);

int main() {
    int arr[5]={1,5,20,6,3},c;
    c=asum(arr);
    printf("Summation of elements= %d",c);
    return 0;
}
int asum( int x[])
{
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum =sum+x[i];
    }
    return sum;
}
