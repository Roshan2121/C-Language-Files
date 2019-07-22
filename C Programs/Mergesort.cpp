#include<stdio.h>
int a[100],b[100];
int merge(int,int);
int mergesort(int,int,int);
int main()
{
	int start,end,i,size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	start=0;end=size-1;
	merge(start,end);
	for(i=0;i<size;i++)
	printf("%d ",a[i]);
}
int merge(int start,int end)
{
	int mid;
	if(start<end)
	{
		mid=(start+end)/2;
		merge(start,mid);
		merge(mid+1,end);
		mergesort(start,mid,end);
	}
	return 0;
}
int mergesort(int start,int mid,int end)
{
	int l1,l2,i;
	for(l1=start,l2=mid+1,i=start;l1<=mid && l2<=end;i++)
	if(a[l1]<=a[l2])
	b[i]=a[l1++];
	else
	b[i]=a[l2++];
	while(l1<=mid)
	b[i++]=a[l1++];
	while(l2<=end)
	b[i++]=a[l2++];
	for(i=start;i<=end;i++)
	a[i]=b[i];
	return 0;
}
