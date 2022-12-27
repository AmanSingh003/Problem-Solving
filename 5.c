#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=70-a;b<70;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
}
