// using pointers for bubble sort
#include <stdio.h>
void sort(int *,int n);
int main() {
    int x[5]={1,5,7,2,6};
    int i,n;
    int *p=&x;
    
    for(i=0;i<5;i++)
    {
        printf("%d\t",x[i]);
    }
    n=5;
    
    printf("\n");
    sort(&x,n);
    return 0;
}

void sort(int *p,int n)
{
    int i,j,temp;
    int *q;
    q=p;
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(*p>*(p+1))
            {
                temp=*p;
                *p=*(p+1);
                *(p+1)=temp;
               // 
            }
            p++;
        }
        p=q;
    }
    
    for(i=0;i<5;i++)
    {
        printf("%d\t",*p);
        p++;
    }
    
}
