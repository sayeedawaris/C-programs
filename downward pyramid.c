/* print following pattern:
*	*	*	*	*	*	
*	*	*	*	*	
*	*	*	*	
*	*	*	
*	*	
*	
	
*/

#include <stdio.h>

int main() {
    int i, j;
    for(i=1;i<=6;i++)
    {
        for(j=6;j>=i;j--)
        { 
            printf("*\t");
        }
         printf("\n");   
    }
    
    
    return 0;
}
