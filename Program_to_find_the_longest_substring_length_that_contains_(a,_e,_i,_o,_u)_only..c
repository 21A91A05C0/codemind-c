#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int m=0,c=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            c=c+1;
        }
        else
        {
            if(c>m)
            {
                m=c;
            }
            c=0;
        }
    }
    if(c>m)
    {
        m=c;
    }
    printf("%d",m);
    
}