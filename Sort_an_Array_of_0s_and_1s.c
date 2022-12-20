#include<stdio.h>
int main()
{
    int n,arr[1000000],i,brr[1000000],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            brr[j]=0;
            j=j+1;
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            brr[j]=1;
            j=j+1;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }
    
}