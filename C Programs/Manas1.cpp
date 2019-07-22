#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i=1,j=1,k;
	float t;
	printf("Enter the limit\n");
	scanf("%d",&n);
	k=(sqrt(1+8*n)+1)/2;
	while(i<=k)
	{
		if(j<=n)
		{
			printf("%d\t",j);
		}
		t=(i*(i+1))/(2.0);
		if(j==t)
		{
			printf("\n");
			i++;
		}
		j++;
		i=i;
	}
	return 0;
}
