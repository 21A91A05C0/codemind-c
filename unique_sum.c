#include<stdio.h>
int main()
{
    int n,i,j,arr[1000],sum=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             if(arr[i]==arr[j] && i!=j)
             {
                arr[j]=-100;
            }
        }
        if(arr[i]!=-100)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}