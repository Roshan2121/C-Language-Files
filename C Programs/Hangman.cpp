#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j,k,l;
	char a[100],b,c[100],d[100];
	printf("Enter the string to be gussed\n");
	gets(a);
	l=strlen(a);
	for(k=1;k<=50;k++)
	printf("\n");
	printf("Enter the blank spaces in the gussed string\n");    
	gets(c);
	printf("Enter the hint\n");
	gets(d);    
	for(i=1;i<=3;i++)
	{
		printf("Guess the characters in the string\n");
		scanf("%c",&b);
		j=0;
		while(a[j]!='\0')
		{
			if(a[j]=='b')
			{
				c[j]='b';
			}
			j++;
		}
		j=0;
	    while(c[j]!='\0')
	    {
	    	if(c[j]!='_')
	    	{
	    		i--;
	    		break;
			}
			j++;
		}
		puts(c);
	}
	j=0;
	while(a[j]!='\0')
	{
		if(a[j]==c[j])
		j++;
		else
		break;
	}
	if(j==l)
	printf("The guesser has won the game");
	else
	printf("The gusser did not go well with the game. Better luck next time!!!!");
}
