#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
	for(int i=1;i<=n;i++)
    {
        int c=0;
        int k=i-1;
        for(int j=1;j<=n-1-i+1;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i-1;j++)
        {
            printf("%d",k);
            k-=1;
           
        }
    
        for(int j=1;j<=i;j++)
        {
            printf("%d",c);
            c=c+1;
        }
        printf("
");
    }
}