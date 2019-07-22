#include<stdio.h>
int main()
{
    int q,i,j,k,N;
    char a[100];
    printf("Enter the number of queries\n");
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
    	printf("Enter the string\n");
        scanf("%s",a);
        j=1;N=0;
        while(a[j]!=0)
        {
            if(a[j]==a[j-1])
              N=N+1;
            j++; 
        }
        printf("%d\n",N);
    }
    return 0;
}

