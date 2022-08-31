#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,arr[1000],c=0;
        scanf("%d",&n);
        int max=-100,min=999;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
                if(arr[i]<arr[i+1])
                {
                    c=c+1;
                    continue;
                }
        }
        if(c==n)
        {
            printf("0");
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                }
                if(arr[i]<min)
                {
                    min=arr[i];
                }
            }
            printf("%d
",max-min);
        }
        
        t=t-1;
    }
}