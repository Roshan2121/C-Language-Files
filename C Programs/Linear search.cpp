#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,ele,pos=-1;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element to be searched\n");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
		    pos=i;
		    break;
		}
	}
	if(pos>=0)
	printf("position is %d",pos);
	else
	printf("The element is not there");
	return 0;
}
