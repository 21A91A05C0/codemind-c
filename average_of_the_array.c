#include<stdio.h>
int main()
{
    int i,n,arr[10000],sum=0;
    float avg=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        avg=(float)sum/n;
    }
    printf("%.2f",avg);
}