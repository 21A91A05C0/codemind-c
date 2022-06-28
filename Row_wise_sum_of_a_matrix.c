#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0,arr[1000][1000];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
    }
}