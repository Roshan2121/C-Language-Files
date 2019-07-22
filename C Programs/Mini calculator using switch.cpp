#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,n;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("Which operation to be performed\n1.Add\n2.Subtract\n3.Multiply\n4.Quotient\n5.Reminder\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Sum=%d",a+b);
			break;
		case 2:
			printf("Difference=%d",a-b);
			break;
		case 3:
			printf("Product=%d",a*b);
			break;
		case 4:
			printf("Quotient=%d",a/b);
			break;
		case 5:
			printf("Reminder=%d",a%b);
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}
