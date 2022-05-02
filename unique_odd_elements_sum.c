#include<stdio.h>
int main()
{
    int arr[1000],i,j,n,c=0;
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
            if(arr[i]%2!=0)
            {
                c=c+arr[i];
            }
        }
    }
    printf("%d",c);
}