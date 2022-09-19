// using pointers in function
/*
If x and y are used as input for function, a copy of them is sent to 
the function and hence they are not actually sorted as in line 19.
But when address of x and y is sent to the function the value of 
x and y gets swapped as in line 22.
*/
#include <stdio.h>
void sort(int x,int y);
void sort1(int *p,int *q);
int main() {
    int x=5;
    int y=3;
    
    int *p=&x;
    int *q=&y;
    
    printf("x=%d and y=%d\n",*p,*q);
    sort(x,y);
    printf("x=%d and y=%d\n",*p,*q);
    sort1(&x,&y);
    printf("x=%d and y=%d\n",*p,*q);
    return 0;
}

void sort(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    
    printf("x=%d and y=%d\n",x,y);
}

void sort1(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("x=%d and y=%d\n",*p,*q);
}
