#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,min=9999,res;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        k=pow(2,i);
        res=abs(k-n);
        if(res<min)
        {
            min=res;
        }
    }
    printf("%d ",min);
}