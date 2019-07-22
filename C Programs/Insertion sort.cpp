#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5]={4,2,8,6,7},i,j,t;
	for(i=1;i<5;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(a[j+1]>a[j])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
			else
			break;
		}
	}
	printf("The sorted array using insertion sort is\n");
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
	return 0;
}
