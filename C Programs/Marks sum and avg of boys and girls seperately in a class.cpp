#include<stdio.h>
#include<conio.h>
int main()
{
	int i,marks[i],j,sum1=0,sum2=0;
	float avg1,avg2;
	printf("Enter the number of students\n");
	scanf("%d",&i);
	printf("Enter the marks of the class with marks of boys and girls alternately\n");
	for(j=0;j<i;j++)
	{
		scanf("%d",&marks[j]);
	}
	printf("marks of boys\n");
		for(j=0;j<i;j+=2)
		printf("&d\n",marks[j]);
	printf("marks of girls\n");	
	   for(j=1;j<i;j+=2)
	   printf("%d\n",marks[j]);
    printf("Average marks of boys is equal to\n");
    for(j=0;j<i;j+=2)
    {
    	sum1=sum1+marks[j];
	}
	if(i%2==0)
	avg1=(float)sum1/(i/2);
	else 
	avg1=(float)sum1/(i/2+1);
	printf("%f\n",avg1);
	printf("Average marks of girls is equal to\n");
	for(j=1;j<i;j+=2)
	{
		sum2=sum2+marks[j];
	}
	avg2=(float)sum2/(i/2);
	printf("%f\n",avg2);
	if(avg1>avg2)
	printf("Girls understand less than boys");
	else
	if(avg1<avg2)
	printf("Girls byheart more than boys");
	else
	printf("Girls copied boys answers");
	return 0;
}
