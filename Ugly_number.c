#include<stdio.h>
int main()
{
    int c=0,n;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
        }
        else if(n%3==0)
        {
            n/=3;
        }
        else if(n%7==0)
        {
            n/=7;
        }
        else
        {
            printf("Not Ugly Number");
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("Ugly Number");
    }
}