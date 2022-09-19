#include <stdio.h>

int main() {

  char operation;
  int a, b;
  
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operation);
  
  printf("Enter First number: ");
  scanf("%d", &a);
  
  printf("Enter Second number: ");
  scanf("%d", &b);

  if (operation=='+') 
  {
      printf("%d + %d = %d", a, b, a + b);
  }
  else if(operation=='-')
    {  
      printf("%d - %d = %d", a, b, a - b);
    } 
  else if(operation=='*')
  {
      printf("%d * %d = %d", a, b, a * b);
   }
  else if(operation=='/')
  {
      printf("%d / %d = %d", a, b, a / b);
   }   
  else
  {
      printf("Error");
  }

  return 0;
}
