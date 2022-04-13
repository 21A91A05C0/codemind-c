#include<stdio.h>
int main()
{
	int n,d[100],i=0,j=0,flag=0,c=0;
	scanf("%d",&n);
	while(n>0)//5123
	{
		d[i++]=n%10;//3 2 1 5
		n=n/10;
		c++;//4
	}
		
		
			for(i=0;i<c;i++)
			{ flag=0;
				for(j=0;j<c;j++)
				{
					if(d[i]==d[j] && i!=j)
					{
						flag=1;
           break;
	
					}
				}
			
				if(flag==1)
				{
					printf("Not Unique Number");
        return 0;
				}

		}
				
					printf("Unique Number");
 return 0;
				}