#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    return n*fact(n-1);
}
// series => x-x3/3!+x5/5!-x7/7!.......
int main()
{
    int n,x,i,v;
    float s=1;
    printf("Enter number of terms for series=>");
    scanf("%d",&n);
    printf("Enter the value of X in the given series =>");
    scanf("%d",&x);
    v=1;
    for (i=1;i<=n;i++)
    {
        (i%2==1?(s+=(float)x*v/fact(v)):(s-=(float)x*v/fact(v)));
     //   printf("%f\n",(float)x*v/fact(v));
        v+=2;
    }
    printf("The sum of srises=>%f\n",s);

}
