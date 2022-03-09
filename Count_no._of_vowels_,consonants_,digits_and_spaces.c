#include<stdio.h>
int main()
{
    int v=0,c=0,d=0,s=0,i;
    char str[1000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' ||str[i]=='o'|| str[i]=='u')
        {
            v++;
        }
        else if(str[i]>='0'&& str[i]<='9')
        {
            d++;
        }
        else if(str[i]==' ')
        {
            s++;
        }
        else
        {
            c++;
        }
    }
    printf("Vowels: %d",v);
    printf("
Consonants: %d",c);
    printf("
Digits: %d", d);
    printf("
White spaces: %d",s);
    
}