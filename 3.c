#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter any character =>");
    scanf("%c",&a);
    if ((a>64) && (a<91))
    {
        printf("Entered character is Capital latter ");
    }
    else
    {
            printf("Entered character is small latter");
    }
}
