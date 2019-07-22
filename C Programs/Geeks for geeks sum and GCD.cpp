#include<stdio.h>
#include<conio.h>
int Nums(int,int);
int main()
{
	int sum,gcd;
	printf("Enter the sum and GCD of the two numbers\n");
	scanf("%d%d",&sum,&gcd);
	Nums(sum,gcd);
	return 0;
}
int Nums(int x,int y)
{
	int i,j;
	if(y>x/2)
	printf("%d",-1);
	else
	if((x-y)%y!=0)
	printf("%d",-1);
	else{
		printf("%d %d\n",y,x-y);
		for(i=2*y;i<=x/2;i+=y)
		{
			for(j=y+1;j<=i;j++)
			{
				if(i%j==0 && (x-i)%j==0)
				break;
			}
			if(j==i+1)
			printf("%d %d\n",i,x-i);
		}
	}
	return 0;
}
