#include<stdio.h>
int main()
{
    int L;
    scanf("%d",&L);
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int W,H;
        scanf("%d %d",&W,&H);
        if(W<L || H<L)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(W==H)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
        t--;
    }
}