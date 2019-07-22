#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,j,t;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	while(i<=n)
	{
		j=n-i;
		while(j>0 && j<=(n-i))
		{
			printf(" ");
			j--;
		}
		j=n-i+1;
		t=1;
		while(j>n-i && j<=n)
		{
			printf("%d",t);
			t++;
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
