#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    for(a=1;a<=3;a++)
    {
        for(b=65;b<a+65;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
}
