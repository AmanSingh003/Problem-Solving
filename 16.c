#include<stdio.h>
#include<conio.h>
int main()
{
    int n=4,y=0,f=1,r=0,c;
    while(r>-1)
    {
        for (c=0;c<n*2-1;c++)
        {
            if (r>c)
            {
                printf("%d ",n-c);
            }
            else
            {
                if (c<(n-r)*2-1+r)
                    printf("%d ",n-r);
            else
                    printf("%d ",(n-r)+c-((n-r)*2-1+r)+1);
            }
        }
        printf("\n");
        if (r==n-1)
            f=-1;
        r+=f;
    }
}
