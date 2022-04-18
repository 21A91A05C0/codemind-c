#include<stdio.h>
int main()
{
    int t,s,b,cap=0,tcap=0;
    scanf("%d %d %d",&t,&s,&b);
    cap=2*s*t*b*512;
    tcap=cap/1024;
    printf("%dKB",tcap);
}