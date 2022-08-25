#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(str[i]=='1' && str[j]=='1')
                {
                    c=c+1;
                }
            }
           
        }
         printf("%d
",c);
        t=t-1;
    }
}