#include<stdio.h>
#include<conio.h>
int main()
{
	int m[100],n,i,pos,ele;
	printf("Enter the limit\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&m[i]);
	printf("Enter the position where the element is to be inserted\n");
	scanf("%d",&pos);
	printf("Enter the element to be inserted\n");
	scanf("%d",&ele);
	n=n+1;
	for(i=n-1;i>=pos+1;i--)
	{
		m[i]=m[i-1];
	}
	m[pos]=ele;
	printf("The new array after insertion is\n");
	for(i=0;i<n;i++)
	printf("%d\t",m[i]);
	return 0;
}
