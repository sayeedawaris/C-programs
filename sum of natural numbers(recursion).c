// Sum of n natural numbers using recursion

#include <stdio.h>
int rec_sum(int n)
{
      if(n==1)
      {
          return 1;
      }
      else
      {
          return (n+rec_sum(n-1));
      }
}

int main() {
    int n,a;
    printf("enter a number: ");
    scanf("%d",&n);
    a=rec_sum(n);
    printf("sum of first %d natural numbers is %d",n,a);
    return 0;
}
