#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,s;
    printf("Enter any number to print the pattern =>");
    scanf("%d",&a);
    for (b=1;b<=a;b++)
    {
        d=b;
        for (s=1;s<30+(a-b);s++)
        {
            printf(" ");
        }
        for (c=1;c<b*2;c++)
        {
            printf("%d",d);
            d=(c<b?(--d):(++d));
        }
        printf("\n");
    }
}
