#include<stdio.h>
int main()
{
	int n,a[100],i,l,j,N,d=0,ans;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	l=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>a[0])
		l=a[i];
	}
	for(i=2;i<=l;i+=2)
	{
		N=0;
		if(i==4)
		i--;
		if(i!=3 && (i%3==0 || i%5==0))
		continue;
		for(j=0;j<n;j++)
		{
			if(a[j]%i==0)
			N=N+1;
		}
		if(N>d)
		{
			d=N;
			ans=i;
		}
	}
	printf("%d",ans);
	return 0;
}
