#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,c=0,res=0,sum=0,rev=0,d1,temp=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    n=temp;
    while(rev>0)
    {
        d1=rev%10;
        c++;
        res=res+pow(d1,c);
        rev=rev/10;
        
    }
    if(res==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}