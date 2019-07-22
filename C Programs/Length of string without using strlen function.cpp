#include<stdio.h>
#include<conio.h>
int xstrlen(char *);
int main()
{
	char a[]="Main land";
	int l;
	l=xstrlen(a);
	printf("The length of the string is %d",l);
	return 0;
}
int xstrlen(char *c)
{
	int b=0;
	while((*c)!='\0')
	{
		b=b+1;
		c++;
	}
	return b;
}
