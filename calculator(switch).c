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

  switch (operation) 
  {
    case '+':
      printf("%d + %d = %d", a, b, a + b);
      break;
    case '-':
      printf("%d - %d = %d", a, b, a - b);
      break;
    case '*':
      printf("%d * %d = %d", a, b, a * b);
      break;
    case '/':
      printf("%d / %d = %d", a, b, a / b);
      break;
    default:
      printf("Error");
  }

  return 0;
}
