#include<stdio.h>
#include<conio.h>
void  sum_series(int n)
{
    int i,v=1;
    float s;
    for (i=1;i<=n;i++)
    {
        (i%2==1?(s+=(float)i/fact(v)):(s-=(float)i/fact(v)));
        v+=2;
    }
    printf("The sum of srises=>%f\n",s);
}
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    return n*fact(n-1);
}
// series => 1-x+x2/2!-x3/3!+4x/4!-x5/5!.......
int main()
{
    int n;
    printf("Enter number of terms for series=>");
    scanf("%d",&n);
    sum_series(n);
}
