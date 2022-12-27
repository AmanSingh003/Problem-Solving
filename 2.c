#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,x;
    printf("Enter any number  for pattern =>");
    scanf("%d",&x);
    for(a=1;a<=x;a++)
    {
        for(b=a;b<2*a;b++)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
}
