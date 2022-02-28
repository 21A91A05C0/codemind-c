#include<stdio.h>
int main()
{
    int n,d,rev=0,res=0,sq=0,q,rev1=0;
    scanf("%d",&n);
    sq=n*n;
    while(n>0)
    {
        d=n%10;
         rev=(rev*10)+d;
        n=n/10;
       
    }
    res=rev*rev;
    while(res>0)
    {
    	q=res%10;
    	rev1=rev1*10+q;
    	res=res/10;
	}
	if(sq==rev1)
	{
		printf("True");
		
	}
	else
	{
		printf("False");
	}
    
    
}