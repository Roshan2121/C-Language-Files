#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if((N/10)%2==0)
	printf("%d",(N/10-1)*10+9);
	else
	if((N%10)%2==0)
	printf("%d",N-1);
	else
	printf("%d",N-2);
	return 0;
}
