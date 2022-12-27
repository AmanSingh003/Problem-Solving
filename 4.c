#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    for(a=1;a<5;a++)
    {
        for(b=64+a;b<64+a*2;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
}
