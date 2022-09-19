// Fibnoacci series
#include <stdio.h>

int main() {
    int i,fib1=0,fib2=1,fib3,n;
    printf("How long should be the series? ");
    scanf("%d",&n);
    printf("%d  ",fib1);
    printf("%d  ",fib1);
    for(i=1;i<=n;i++)
    {
        fib3=fib1+fib2;
        printf("%d  ",fib3);
        fib1=fib2;
        fib2=fib3;
    }
    return 0;
}
