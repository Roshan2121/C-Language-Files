#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,k;
	printf("Enter the number\n");
	scanf("%d",&n);
	i=0;k=0;
	while(i<n)
	{
		k++;
		i=i+k;
	}
	printf("%d",k);
	return 0;
}
