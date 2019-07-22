#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,arr[100],N=0,t,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(j=0;j<n-1;j++)
    {
        for(k=j+1;k<n-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                t=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=t;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            N=N+1;
            i++;
        }   
    }
    printf("%d",N);
    return 0;
}
