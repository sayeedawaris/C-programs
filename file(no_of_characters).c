// Reading file contents using characters only and number of characters in file
#include<stdio.h>
int main()
{
	char ch; int n=0;
	FILE *p;
	p=fopen("file2.txt","r");
	if(p==NULL)
	{
		printf("No records found");
	}
	else
	{
		ch=getc(p);
		while(ch!= EOF)
		{
			printf("%c",ch);
			ch=getc(p);
			n++;
		}
	}
	printf("\n Number of characters: %d",n);
	fclose(p);
}
