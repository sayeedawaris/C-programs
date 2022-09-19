// C program to find whether a number is even or odd
#include<stdio.h>
int main()
{
 int a;
 printf("Enter any number: ");
 scanf("%d", &a);
 if(a%2==0)
 {
  printf("Entered number is Even");
 }
 else
 {
  printf("Entered number is Odd");
 }
 return 0;
}
