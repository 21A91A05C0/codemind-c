#include<stdio.h>
int main()
{
    int n,arr[1000],i,c=0;
    scanf("%d",&n);
    int a[n],k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            c++;
            a[k]=arr[i];
            k++;
        }
    }
    printf("%d",a[c-1]);
}