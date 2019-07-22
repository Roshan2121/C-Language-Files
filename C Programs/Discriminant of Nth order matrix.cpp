#include<stdio.h>
#include<math.h>
int i,j;
int Discriminant(int,int *);
int main()
{
	int order,Ans;
	printf("Enter the order of the matrix\n");
	scanf("%d",&order);
	int arr[order][order];
	printf("Enter the matrix\n");
	for(i=0;i<order;i++)
	{
		for(j=0;j<order;j++)
		scanf("%d",&arr[i][j]);
	}
	j=-1;
	Ans=Discriminant(order,arr);
	printf("%d",Ans);
	return 0;
}
int Discriminant(int x,int *y)
{
	int dis=0;
	if(x>0)
	{
		j++;
		for(i=0;i<x;i++)
		dis=dis+pow(-1,i+j)*(*(*(y+j)+i))*Discriminant(x-1,*(*(y+j)+j));
	}
	return dis;
}
