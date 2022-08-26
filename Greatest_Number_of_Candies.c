#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int maxx=-1;
    for (int i=0;i<n;i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if((arr[i]+m)>=maxx)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}