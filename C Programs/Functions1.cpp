#include<stdio.h>
#include<conio.h>
int summation(int *,int *);
int main()
{
	int a,b;
	printf("Enter the numbers\n");
	scanf("%d%d",&a,&b);
    summation(&a,&b);
	printf("%d",a);
	return 0;
}
int summation(int *x,int *y)
{
	*x=*x+*y;
}
