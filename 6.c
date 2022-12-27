#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    return n*fact(n-1);
}
// series => x-x2/2!+x4/4!-x6/6!.......
int main()
{
    int n,x,i,v;
    printf("Enter number of terms for series=>");
    scanf("%d",&n);
    printf("Enter the value of X in the given series =>");
    scanf("%d",&x);
    float s=x;
    v=2;
    for (i=2;i<=n;i++)
    {
        (i%2==1?(s+=(float)x*v/fact(v)):(s-=(float)x*v/fact(v)));
     //   printf("%f\n",(float)x*v/fact(v));
        v+=2;
    }
    printf("The sum of srises=>%f\n",s);
}
