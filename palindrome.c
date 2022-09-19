// Palindrome
#include <stdio.h>

int main() {
    int i,n,flag=0;
    printf("Enter number of letters in the word: ");
    scanf("%d",&n);
    char x[n];
    printf("Enter the word: ");
    scanf("%s",&x);
    for(i=0;i<n/2;i++)
    {
        if(x[i]!=x[n-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not palindrome");
    }
    else
    {
        printf("palindrome");
    }
    
    return 0;
}
