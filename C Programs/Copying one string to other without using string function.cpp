#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,l;
	char a[100],b[100];
	printf("Enter the string a\n");
	gets(a);
	i=1;
	while(a[i]!=0)
	{
		b[i]=a[i];
		i++;
	}
	puts(b);
	l=strlen(b);
	printf("Length of the string=%d",l);
	return 0;
}
