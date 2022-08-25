#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int c=1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                c=c+1;
            }
        }
        printf("%d
",c);
        t=t-1;
    }
}