#include<stdio.h>
int main()
{
    int n,arr[1000],i,mul=1,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { mul=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                mul=mul*arr[j];
            }
        }
        printf("%d ",mul);
    }
   
}