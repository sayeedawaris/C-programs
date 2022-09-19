// Reversing word(array);
#include <stdio.h>

int main() {
    int i=0,n;
    char x[100];
    printf("Enter the word: ");
    scanf("%s",&x);
    
    while(x[i]!='\0')
    {
        i++;
    }
    n=i;
    printf("Reverse: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%c",x[i]);
    }
    return 0;
}
