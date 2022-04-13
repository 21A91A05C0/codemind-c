#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);//0 1
        c=a+b;//1 2
        a=b;//0=1
        b=c;//1
    }
    
}