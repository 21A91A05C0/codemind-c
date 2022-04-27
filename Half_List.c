#include<stdio.h>
int main()
{
    int arr[100],i,n,k=0,l=0,a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=n/2;i--)
    {
        a[k]=arr[i];
        k++;
    }
    for(i=0;i<n/2;i++)
    {
        a[k]=arr[i];
        k++;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
}