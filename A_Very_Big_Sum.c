#include<stdio.h>
int main()
{
    int n,i;
    long sum=0,value;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   
        scanf("%li",&value);
        sum=sum+value;
    }
    printf("%li",sum);
}