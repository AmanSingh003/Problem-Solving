#include<stdio.h>
#include<conio.h>
int main()
{
    int a ;
    printf("Enter any year to find its leap year =>");
    scanf("%d",&a);
    if (a%4==0)
    {
        if(a%100==0)
        {
            if (a%400==0)
            {
                printf("Entered year %d  is leap year ",a);
            }
            else{
                printf("Entered year %d is not a leap year ",a);
            }
        }
        else{
            printf("Entered year %d is leap year ",a);
        }
    }
    else
    {
        printf("Entered year %d is not  leap year ",a);
    }
}
