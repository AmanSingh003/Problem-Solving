#include<stdio.h>
#include<conio.h>
int main()
{
    int c;
    printf("Enter temperature in centigrade=>");
    scanf("%d",&c);
    if(c<0)
    {
        printf("FREEZING WEATHER");
    }
    else if (c>=0 && c<10)
    {
       printf("THEN VERY COLD WEATHER");
    }
    else if (c>=10 && c<20)
    {
        printf("COLD WEATHER");
    }
    else if (c>=20 && c<30)
    {
        printf("NORMOL IN TEMP");
    }
    else if (c>=30 && c<40)
    {
        printf("HOT");
    }
    else
    {
        printf("ITS VERY HOT");
    }
}
