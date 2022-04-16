#include<stdio.h>
#include<stdlib.h>
int main()
{
    char x[10],y[10];
    long int a,b;
    scanf("%s%s",x,y);
    a=atoi(x);
    b=atoi(y);
    printf("%ld",a*b);
    return 0;
}