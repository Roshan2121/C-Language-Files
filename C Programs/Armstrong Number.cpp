#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,n=1,x,sum,c;
	printf("Enter the limits\n");
	scanf("%d%d",&a,&b);
	while((n>=a) && (n<=b))
	{
		x=n;
		sum=0;
		while(x!=0)
		{
			c=x%10;
			sum=sum+c*c*c;
			x=x/10;
		}
		if(sum==n)
		printf("%d\n",n);
		n++;
	}
	return 0;
}
