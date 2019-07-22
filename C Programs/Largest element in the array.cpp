#include<stdio.h>
#include<conio.h>
int main()
{
	int m[100],n,i,j;
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<n;i++)
	{
		j=i+1;
		while(j<n)
		{
			if(m[i]>=m[j])
			{
				j++;
			}
			else
			break;
		}
		if(j==n)
		{
			printf("%d is the largest number in the array",m[i]);
			break;
		}
	}
	return 0;
}
