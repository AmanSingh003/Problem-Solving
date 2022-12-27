#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter any three number =>");
    scanf("%d %d %d",&a,&b,&c);
    printf("the largest among entered number is=>%d",(a>b?(a>c?a:c):(b>c?b:c)));
}
