#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i=1,j,k,fact;
	float sum=0,pow;
	printf("Enter the last number\n");
	scanf("%d",&a);
	while(i<=a)
	{
		j=1;
		pow=1;
		while(j<=i)
		{
			pow=pow*i;
			j++;
		}
		k=1;
		fact=1;
		while(k<=i)
		{
			fact=fact*k;
			k++;
		}
		sum=sum+(pow)/(fact);
		i++;
	}
	printf("Sum=%f",sum);
	return 0;
}
