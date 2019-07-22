#include<stdio.h>
#include<conio.h>
int main()
{
	int n,y=0,z=1,i=3,x;
	printf("Enter the limit\n");
	scanf("%d",&n);
	printf("%d\t",y);
	printf("%d\t",z);
	while(i<=n)
	{
		x=y+z;
		printf("%d\t",x);
		y=z;
		z=x;
		i++;
	}
	return 0;
}
