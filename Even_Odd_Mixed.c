#include<stdio.h>
int main()
{
    int n,d[100],i,c=0,k=0,l,flag=0,z=0;
    scanf("%d",&n);
    while(n>0)
    {
        d[i++]=n%10;
        n=n/10;
        c++;
    }
    for(i=0;i<c;i++)
    {flag=0;
        if(d[i]%2==0)
        {
            //flag==1;
            k++;
        }
        if(d[i]%2!=0)
        {
           // flag=2;
            z++;
        }
    }
    if(k==c)
    {
        printf("Even");
    }
    else if(z==c)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}