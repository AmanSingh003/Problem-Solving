#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,s;
    printf("Enter any number to print the pattern =>");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        for(c=1;c<=b;c++)
        {
            printf("%d",c);
        }
        for(c=1;c<=2*(a-b);c++)
        {
            printf(" ");
        }
        for(c=b;c>=1;c--)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}
