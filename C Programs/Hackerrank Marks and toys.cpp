#include<stdio.h>
int main()
{
    int n,k,costarr[100],i,j,t,amountspent=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&costarr[i]);
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(costarr[j]>costarr[j+1])
            {
                t=costarr[j];
                costarr[j]=costarr[j+1];
                costarr[j+1]=t;
            }
            else
            break;
        }
    }
    if(costarr[0]>k)
    printf("%d",0);
    else{
          for(i=0;i<n;i++)
          {
              amountspent=amountspent+costarr[i];
              if(amountspent>=k)
              {
                  printf("%d",i);
                  break;
              }
          }
    }
    return 0;
}

