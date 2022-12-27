#include<stdio.h>
#include<conio.h>
int main()
{
    int a=6,b,c,d,s;
   // printf("Enter any number to print the pattern =>");
    //scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        for(c=1;c<=a-b;c++)
        {
            printf("%d ",c);
        }
        for(c=1;c<2*b;c++)
        {
            printf("  ");
        }
        for(c=a-b;c>=1;c--)
        {
            (a!=c)?printf("%d ",c):printf("");
        }
        printf("\n");
    }
}
