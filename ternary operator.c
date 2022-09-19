// C program to use ternary operator

/*
Synatx of Ternary operator
testCondition ? expression1 : expression 2;
The testCondition is a boolean expression that results in either true or false. If the condition is
true - expression1 (before the colon) is executed
false - expression2 (after the colon) is executed
*/
#include <stdio.h>

int main() 
{
    int z,a,b;
    printf("Please enter number a: ");
    scanf("%d",&a);
    printf("Please enter number b: ");
    scanf("%d",&b);
    z=a>b? a:b;
    printf("%d",z);
    return 0;
}
