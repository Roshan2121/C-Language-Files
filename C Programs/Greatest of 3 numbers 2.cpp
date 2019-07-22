#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	printf("a is the greatest number");
	if((b>c)&&(b>a))
	printf("b is the greatest");
	if((c>a)&&(c>b))
	printf("c is the greatest");
	return 0;
}
