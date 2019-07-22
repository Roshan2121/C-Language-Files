#include<stdio.h>
#include<conio.h>
int roman(int);
int main()
{
	int a;
	printf("Enter the decimal number\n");
	scanf("%d",&a);
	printf("The roman value of the decimal input is\n");
	roman(a);
	return 0;
}
int roman(int c)
{
	int d,k;
	d=c/1000;
	c=c%1000;
	for(k=1;k<=d;k++)
	printf("m");
	d=c/500;
	c=c%500;
	for(k=1;k<=d;k++)
	printf("d");
	d=c/100;
	c=c%100;
	for(k=1;k<=d;k++)
	printf("c");
	d=c/50;
	c=c%50;
	for(k=1;k<=d;k++)
	printf("l");
	d=c/10;
	c=c%10;
	for(k=1;k<=d;k++)
	printf("x");
	d=c/5;
	c=c%5;
	for(k=1;k<=d;k++)
	printf("v");
	if(c==4)
	printf("iv");
	else
	if(c!=1)
	{
		for(k=1;k<=c;k++)
		printf("i");
	}
	return 0;
}
