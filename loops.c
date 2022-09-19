#include <stdio.h>

int main() {

  
  int a, b;
  for(a=1;a<=100;a++)//in place of a++, ++a can also be used
  {
      printf("%d\t",a);
  }
  
  printf("\n");
  printf("\n");
  
  for(b=100;b>=2;b=b-2)
  {
      printf("%d\t",b);
  }
  return 0;
}
