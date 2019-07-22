#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,n;
	printf("Enter the number\n");
	scanf("%d",&a);
	n=0;
	b=a;
	while(b!=0)
	{
		n=n+1;
		b=b/10;
	}
	printf("Number of digits=%d",n);
	return 0;
}
