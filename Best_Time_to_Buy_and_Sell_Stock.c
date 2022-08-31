#include<stdio.h>
int main()
{
    int n,arr[1000],b[1000]={0},k=0,max=-100;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            b[k++]=arr[j]-arr[i];
        }
    }
    for(int i=0;i<k;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    if(max>0)
    {
        printf("%d",max);
    }
    else
    {
        printf("0");
    }
}