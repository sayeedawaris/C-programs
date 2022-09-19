// No of sentences in file
#include<stdio.h>
int main()
{
	char ch; int num=0; 
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
			ch=getc(p);
			if(ch=='.' || ch=='?' || ch=='!')
			{
				num++;
			}
		}
	}
	printf("\n Number of sentences: %d",num);
	fclose(p);
}
