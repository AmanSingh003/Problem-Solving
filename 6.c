#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the side of triangle(a b c) in the given format=>");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("The entered triangle EQUILATERAL Triangle ");
    }
    else if(a==b || b==c ||a==c)
    {
        printf("The entered triangle ISOSCELES Triangle ");
    }
    else
    {
        printf("The entered triangle Scalene Triangle ");
    }
}
