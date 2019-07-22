#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter the two strings\n");
    gets(a);
    gets(b);
    strcat(b,a);
    printf("The two strings after the process is\n");
    puts(a);
    puts(b);
    return 0;
}
