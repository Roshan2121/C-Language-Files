#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,k=0;
	char a[100],b[100],c[200];
	printf("Enter the two strings\n");
	gets(a);
	gets(b);
	while(a[i]!=0)
	{
		c[k]=a[i];
		i++;k++;
	}
	while(b[j]!=0)
	{
		c[k]=b[j];
		j++;k++;
	}
	c[k]=0;
	printf("The concatinated string is\n");
	puts(c);
	printf("The length of the concatinated string is %d",k);
	return 0;
}
