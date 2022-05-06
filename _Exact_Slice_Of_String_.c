#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,l;
    char str[1000];
    scanf("%[^
]s",str);
    scanf("%d%d",&n,&m);
    l=strlen(str);
    for(i=n;i<m+1;i++)
    {
        printf("%c",str[i]);
    }
}