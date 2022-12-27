#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter the coordinate point (x y) format =>");
    scanf("%d %d",&x,&y);
    if (x>=0 && y>=0)
    {
        printf("FIRST QUADERENT");
    }
    else if(x<=0 && y>=0)
    {
        printf("SECOND QUADERENT");
    }
    else if (x<=0 && y<=0)
    {
        printf("THIERD QUADERENT");
    }
    else if(x>=0 && y<=0)
    {
        printf("FOURTH QUADERENT");
    }
}
