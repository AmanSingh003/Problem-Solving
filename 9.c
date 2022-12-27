#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,s;
    printf("Enter any number to print the pattern =>");
    scanf("%d",&a);
    for (b=1;b<=a;b++)
    {
        for (s=1;s<=(a-b);s++)
        {
            printf(" ");
        }
        for (c=1;c<b*2;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (b=a-1;b>=1;b--)
    {
        for (s=1;s<=(a-b);s++)
        {
            printf(" ");
        }
        for (c=1;c<b*2;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
