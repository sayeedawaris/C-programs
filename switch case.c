//C program to use switch-case
#include <stdio.h>

int main() 
{
    int x;
    printf("Enter any number from 1-12: ");
    scanf("%d", &x);
    
    switch(x)
    {
      case 1:
        printf("January");
        break;
      case 2:
        printf("Feburary");
        break;
      case 3:
        printf("March");
        break;
      case 4:
        printf("April");
        break;
      case 5:
        printf("May");
        break;
      case 6:
        printf("June");
        break;
      case 7:
        printf("July");
        break;
      case 8:
        printf("August");
        break;
      case 9:
        printf("September");
        break;
      case 10:
        printf("October");
        break;
      case 11:
        printf("November");
        break;
      case 12:
        printf("December");
        break;
      default:
        printf("Number out of range");
    }
    return 0;
}




//C program to use switch-case
#include <stdio.h>

int main() 
{
    char x;
    printf("Enter any month initial : ");
    scanf("%c", &x);
    
    switch(x)
    {
      case 'j':
        printf("Jan, June, July");
        break;
      case 'f':
        printf("Feburary");
        break;
      case 'm':
        printf("March, may");
        break;
      case 'a':
        printf("April, august");
        break;
      case 's':
        printf("September");
        break;
      case 'o':
        printf("October");
        break;
      case 'n':
        printf("November");
        break;
      case 'd':
        printf("December");
        break;
      default:
        printf("Number out of range");
    }
    return 0;
}
