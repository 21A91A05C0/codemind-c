#include<stdio.h>
#include<ctype.h>
int main()
{
    int d=0,i;
    char str[1000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&& str[i]<='9')
        {
            d++;
            
        }

    }
    if(d>0)
    printf("Contains %d digit",d);
    else
    {
        printf("Doesn't contain digit");
    }
}