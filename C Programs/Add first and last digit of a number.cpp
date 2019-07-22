#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,sum=0,n,i=1;
	printf("Enter how many digits are there in a number\n");
	scanf("%d",&n);
	printf("Enter the number\n");
	scanf("%d",&a);
	while(i<=n)
	{
		b=a%10;
		if((i==1)||(i==n))
		{
			sum=sum+b;
		}
		a=a/10;
		i++;
	}
	printf("Sum=%d",sum);
	return 0;
}
