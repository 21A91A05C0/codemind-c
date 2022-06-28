#include<stdio.h>
int main()
{
    int n,m,i,j,arr[1000][1000],sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j or i+j==n-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}