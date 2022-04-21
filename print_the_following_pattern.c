#include<stdio.h>
int main()
{
    int i,j,arr[100],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j|| j==0 ||j==n-1 )
            {
                printf("* ");
            }
            
            else
            {
                printf("  ");
            }
            
        }
        printf("
");
    }
}