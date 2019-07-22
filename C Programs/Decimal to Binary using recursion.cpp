#include<stdio.h>
#include<conio.h>
#include<math.h>
int i=-1;
int binary(int);
int main()
{
	int n,ans;
	printf("Enter the number\n");
	scanf("%d",&n);
	ans=binary(n);
	printf("The binary form of the number is %d",ans);
	return 0;
}
int binary(int x)
{
	int c,res=0;
	c=x%2;
	i++;
	if(x!=0)
	res=c*pow(10,i)+binary(x/2);
	return(res);
}
