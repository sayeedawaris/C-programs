// File in C
#include<stdio.h>
int main()
{
	int x=5; char s[10]="Hello!"; float f=2.5;
	FILE *p;
	p=fopen("file1.txt","w");  // if no such file exists, a file gets created.
	fprintf(p,"%d %s\n%f",x,s,f);
	fclose(p);
}
