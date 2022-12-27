#include<stdio.h>
#include<conio.h>
int leap(int a)
{
    if (a%4==0)
    {
        if(a%100==0)
        {
            if (a%400==0)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
int main ()
{
    int a,y,l;
    printf("Enter any date in ddmmyyyy format=>");
    scanf("%d",&a);
    y=((a%10000)-1900)*365+(((a%10000)-1900)/4);
    printf("%d",y);
     if(leap((a%10000))==0)
    {
        l=28;
    }
    else
    {
        l=29;
    }
    switch(((a/10000)%100)-1)
    {
    case(0):
        break;
    case(1):
        y+=31;
        break;
    case(2):
        y=y+31+l;
        break;
    case(3):
        y=y+31+l+31;
        break;
    case(4):
        y=y+31+l+31+30;
        break;
    case(5):
        y=y+31+l+31+30+31;
        break;
    case(6):
        y=y+31+l+31+30+31+30;
        break;
    case(7):
        y=y+31+l+31+30+31+30+31;
        break;
    case(8):
        y=y+31+l+31+30+31+30+31+31;
        break;
    case(9):
        y=y+31+l+31+30+31+30+31+31+30;
        break;
    case(10):
        y=y+31+l+31+30+31+30+31+31+30+31;
        break;
    case(11):
        y=y+31+l+31+30+31+30+31+31+30+31+30;
        break;
    default:
        printf("invalid Entered month");
    }
    y=(y+(a/1000000))%7;
    switch(y)
    {
    case(0):
        printf("SUNDAY");
        break;
    case(1):
        printf("MONDAY");
        break;
    case(2):
        printf("TUESDAY");
        break;
    case(3):
        printf("WEDNESDAY");
        break;
    case(4):
        printf("THURSDAY");
        break;
    case(5):
        printf("FRIDAY");
        break;
    case(6):
        printf("SATURDAY");
        break;
    }

}
