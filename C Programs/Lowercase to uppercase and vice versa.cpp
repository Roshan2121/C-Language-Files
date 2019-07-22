#include<stdio.h>
int main()
{
	int i=0,x,y;
	char a[100];
	printf("Enter the string\n");
	gets(a);
	x='a';y='A';
	while(a[i]!=0)
	{
		if(a[i]>=x && a[i]<=x+25)
		a[i]=a[i]+(y-x);
		else
		if(a[i]>=y && a[i]<=y+25)
		a[i]=a[i]-(y-x);
		i++;
	}
	printf("The new string is\n");
	puts(a);
	return 0;
}
