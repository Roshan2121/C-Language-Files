#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int l1,l2,diff;
	char a[100],b[100];
	printf("Enter the two strings\n");
	gets(a);
	gets(b);
	l1=strlen(a);
	l2=strlen(b);
	if(l2>l1)
	diff=l2-l1;
	else
	diff=l1-l2;
	printf("%d",diff);
	return 0;
}
