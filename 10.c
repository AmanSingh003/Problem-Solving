#include<stdio.h>
#include<conio.h>
int main()
{


    int a,b,c,d,s;
        printf("Enter any number to print the pattern =>");
        scanf("%d",&a);
        for (b=a;b>=1;b--)
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
        for (b=2;b<=a;b++)
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
