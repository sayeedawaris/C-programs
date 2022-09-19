// Reading file contents
#include<stdio.h>
int main()
{
	int x; char s[10];
	FILE *p;
	p=fopen("file1.txt","r");
	if(p==NULL)
	{
		printf("No records found");
	}
	else
	{
		fscanf(p,"%d %s",&x,&s);
		printf("File contents: %d %s",x,s);
	}
}
