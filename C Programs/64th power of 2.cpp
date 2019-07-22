#include<stdio.h>
int main()
{
	int i,arr[20],j,s,c,count=0;
	arr[0]=1;
	for(i=1;i<20;i++)
	arr[i]=-1;
	i=1;
	while(i<=64)
	{
		c=0;
		for(j=0;j<=count;j++)
		{
			s=2*arr[j]+c;
			arr[j]=s%10;
			c=s/10;
			if(arr[j+1]<0)
			{
				arr[j+1]=c;
				count=j+1;
				break;
			}
		}
		printf("count=%d\n",count);
		for(j=count;j>=0;j--)
		printf("%d",arr[j]);
		printf(" %d\n",i);
		i=i+1;
	}
	printf("The number of grains int the 64th box is\n");
	for(i=count;i>=0;i--)
	printf("%d",arr[i]);
	return 0;
}
