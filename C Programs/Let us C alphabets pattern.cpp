#include<stdio.h>
#include<conio.h>
int main()
{
	int n,x,i,j,k,l=1,m,b;
	scanf("%d",&n);     //Position of the last alphabet in A to Z....
	x='A';
	b=x+n-2;
	for(i=x+n-1;i>=x;i--)
	{
		for(j=x;j<=i;j++)
		printf("%c ",j);
		if(i!=x+n-1)
		{
			for(k=1;k<=l;k++)
			printf("  ");
			l=l+2;
		}
		if(i==x+n-2)
		b++;
		for(m=b;m>=x;m--)
		printf("%c ",m);
		printf("\n");
		b--;
	}
	return 0;
}
