//to swap first and last digit of the number
#include<stdio.h>
#include<conio.h>
int main()
{
	int m=21,n;
	while(m>1)
	{
		printf("Select the number of match sticks out of 4\n");
		scanf("%d",&n);
		if(n==4)
		{
			printf("Computer selected 1 match stick\n");
			m=m-5;
		}
		else
		if(n==3)
		{
			printf("Computer selected 2 match sticks\n");
			m=m-5;
		}
		else
		if(n==2)
		{
			printf("Computer selected 3 match sticks\n");
			m=m-5;
		}
		else
		{
			printf("Computer selected 4 match sticks\n");
			m=m-5;
		}
		printf("Number of match sticks left=%d\n",m);
	}
	printf("There is only 1 match stick left so the player lost and computer won the game!!!!Better luck next time");
	return 0;
}
