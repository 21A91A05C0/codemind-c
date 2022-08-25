#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]>0)
            {
                if(i!=j && arr[i]==arr[j])
                {
                    
                        c=c+1;
                        arr[i]=-1;

                }
            }
        }
    }
    printf("%d",c+n);
}