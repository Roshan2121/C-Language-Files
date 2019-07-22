#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j,k,l,b;
	printf("Enter the limit\n");
	scanf("%d",&a);
	i=a;
	k=1;
	while(i<=a && i>0)     //i is the loop counter for number of lines
	{
	   j=1;
	   while(j<=i-1)        //j is the loop counter to nacessary amount of print spaces
	   {
	   	  printf(" ");     //printing spaces
	   	  j++;
	   }
	   l=1;
	   b=0;
	   	while(l<=k && b<l)  //Here l and b are not the loop counter but we want to print the value of l or l-b each time
	   	{
	   		if(l<k)
	   		{
	   			printf("%d",l);
	   			l++;
			}
	   		else
	   		{
	   			printf("%d",l-b);
	   			b++;
			}
	    }
	    printf("\n");
	    k++;
	    i--;
	}
	return 0;
}
