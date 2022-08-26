#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int c=0;
        char s[1000];
        scanf("%s",s);
        for(int i=0;s[i]!=NULL;i++)
        {
            if(s[i]==s[i+1])
            {
                c=c+1;
            }
        }
        printf("%d
",c);
    }
}