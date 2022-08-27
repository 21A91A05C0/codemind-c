#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=-9999,sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    printf("%d",max);
}