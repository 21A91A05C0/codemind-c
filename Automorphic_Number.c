#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp=0,c=0,pw,k,sq,d;
    scanf("%d",&n);
    sq=n*n;
    temp=n;
    while(n>0)
    {
       d=n%10;
       n=n/10;
       c++;
    }
    n=temp;
    pw=pow(10,c);
    k=sq%pw;
    if(n==k)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    
}