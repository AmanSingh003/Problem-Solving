#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    for(a=1;a<5;a++)
    {
        for(b=a;b<2*a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}
