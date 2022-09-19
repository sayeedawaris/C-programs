// Length of word(array)
#include <stdio.h>

int main() {
    int i=0;
    char x[100];
    printf("Enter the word: ");
    scanf("%s",&x);
    
    while(x[i]!='\0')
    {
        i++;
    }
    printf("Lenth of word is: %d",i);
    
    return 0;
}
