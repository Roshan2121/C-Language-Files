#include <stdio.h>
#include<math.h>
int main()
{
    int u,l,i,n,j,sum,k;
    scanf("%d",&l);
    scanf("%d",&u);
    for(i=l;i<=u;i++)
    {
        sum=0;n=0;
        j=i*i;
        while(j!=0)
        {
            n=n+1;
            j=j%10;
        }
        j=i*i;
        k=pow(10,n-1);
        sum=j%k+j/k;
        if(sum==i)
            printf("%d ",i);
    }
    return 0;
}

