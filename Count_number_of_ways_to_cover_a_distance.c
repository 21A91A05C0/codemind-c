#include<stdio.h>
int f(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        return 0;
    }
    else
    {
        return f(n-1)+f(n-2)+f(n-3);
    }
}
int main()
{
    
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
}