#include<stdio.h>
int main()
{
	int n,a[20],b[5],i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	b[i]=0;
	for(i=0;i<n;i++)
	b[a[i]-1]++;
	for(i=0;i<5;i++)
	{
		for(j=0;j<b[i];j++,k++)
		a[k]=i+1;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
