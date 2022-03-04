#include<stdio.h>
int main()
{
    int n,i;
    float res=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res=res+1.0/i;
    }
    printf("%.2f",res);
}