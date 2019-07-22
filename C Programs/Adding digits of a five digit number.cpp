#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,sum=0,n,N=1;
	printf("Enter the no. of digits in the number\n");
	scanf("%d",&n);
	printf("Enter the number\n");
	scanf("%d",&a);
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
