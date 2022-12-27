#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    return n*fact(n-1);
}
// series => 1-x+x2/2!-x3/3!+4x/4!-x5/5!.......
int main()
{
    int n,x,i;
    float s=1;
    printf("Enter number of terms for series=>");
    scanf("%d",&n);
    printf("Enter the value of X in the given series =>");
    scanf("%d",&x);
    for (i=1;i<=n;i++)
        (i%2==0?(s+=(float)x*i/fact(i)):(s-=(float)x*i/fact(i)));
    printf("The sum of srises=>%f\n",s);

}
