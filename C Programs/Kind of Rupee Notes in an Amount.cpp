#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	printf("Enter the amount\n");
	scanf("%d",&a);
	c=a/2000;
	if(c!=0)
	{
	a=a-c*2000;
    }
    d=a/500;
    if(d!=0)
    {
    	a=a-d*500;
	}
	e=a/100;
	if(e!=0)
	{
		a=a-e*100;
	}
	f=a/50;
	if(f!=0)
	{
		a=a-f*50;
	}
	g=a/10;
	if(g!=0)
	{
		a=a-g*10;
	}
	h=a/5;
	if(h!=0)
	{
		a=a-h*5;
	}
	b=a;
	printf("In the amount number of:\n2000 rupee note=%d\n500 rupee note=%d\n100 rupee note=%d\n50 rupee note=%d\n10 rupee note=%d\n5 rupee note=%d\n one rupee coins=%d",c,d,e,f,g,h,b);
	return 0;
}
