#include<stdio.h>
int main()
{
    int d[100],i,n,sum=0,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        d[i]=n%10;
        n=n/10;
        sum=sum+d[i];
    }
    if(t%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}