#include<stdio.h>
int palin(int n)
{
    int d,r=0,t;
    t=n;
    while(n)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(r==t)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=n+1;i<=100000;i++)
    {
        if(palin(i))
        {
            int c=0;
            for (int m=1;m<=i;m++)
            {
                if(i%m==0)
                c=c+1;
            }
            if(c==2)
            {
            printf("%d",i);
            break;
            }
        }
        else
        continue;
    }
}
