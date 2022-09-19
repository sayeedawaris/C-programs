*	*	*	*	*	*	
	*	*	*	*	*	
		*	*	*	*	
			*	*	*	
				*	*	
					*
          
#include <stdio.h>

int main() {
    int i, j, k;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<i;j++)
        { 
            
            printf("\t");
        }
       for(k=6;k>=i;k--)
        {
             printf("*\t");
              
        }
         printf("\n");   
    }
    
    
    return 0;
}
