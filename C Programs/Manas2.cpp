#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,j=1;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	while(i<=n)
	{
		j=i;
		while(j<=i)
		{
			printf("%d",j);
			if(j==1)
			{
				printf("\n");
				i++;
				break;
			}
			else
			j--;
		}
	}
	return 0;
}
