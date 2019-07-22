#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i=1,fact=1;
	printf("Enter the number\n");
	scanf("%d",&a);
	while(i<=a)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial=%d",fact);
	return 0;
}
