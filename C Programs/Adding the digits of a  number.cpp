#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,sum=0,n=0,N=1;
	printf("Enter the number\n");
	scanf("%d",&a);
	c=a;
	while(c!=0)
	{
		c=c/10;
		n=n+1;
	}
	printf("Number of digits=%d\n",n);
	while(N<=n)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
		N++;
	}
	printf("Sum=%d",sum);
	return 0;
}
