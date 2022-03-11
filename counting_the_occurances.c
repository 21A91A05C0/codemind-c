#include<stdio.h>
int main()
{
    int i,d=0,flag=0;
    char str[1000],c;
    scanf("%[^
]s",str);
    scanf("%s",&c);
    for(i=0;str[i]!=NULL;i++)
    {
        if(c==str[i])
        {
           d++; 
           flag=1;
        }
    
    }
    if(flag==1)
    {
        printf("%d",d);
    }
    else
    {
        printf("-1");
    }
    
}