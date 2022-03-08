#include<stdio.h>
int main()
{
    int n,arr[1000],t,i,amount1=0,amount2=0,res=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]>t)
        {
            amount1=amount1+2;
        }
        else 
        {
            amount2=amount2+1;
        }

       res=amount1+amount2; 
    }
    printf("%d",res);
}