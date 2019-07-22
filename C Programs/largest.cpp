#include<stdio.h>
#include<conio.h>
int main()
{
	int m[100],n,i;
	printf("Enter the limit");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&m[i]);
	for(i=0;i<n;i++)
	{
		if(m[0]<m[i])
		m[0]=m[i];
	}
	printf("%d is the largest number in the array",m[0]);
	return 0;
}
