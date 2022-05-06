#include<stdio.h>
int main()
{
    int arr[10000],n,i,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(arr[i]==j)
        {
            flag=1;
            printf("%d ",i);
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==j)
        {
            flag=1;
            printf("%d ",i);
            break;
        }
    }
    if(flag==0)
    printf("-1 -1");
}