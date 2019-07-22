#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("Enter the string\n");
	gets(a);
	strcpy(b,a);
	printf("After copying\n");
	printf("String a=");
	puts(a);
	printf("String b=");
	puts(b);
	return 0;
}
