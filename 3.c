#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    return n*fact(n-1);
}
// series => 1+x+x2/2!+.......+xN/N!
int main()
{
    int n,s=1,x,i;
    printf("Enter number of terms for series=>");
    scanf("%d",&n);
    printf("Enter the value of X in the given series =>");
    scanf("%d",&x);
    for (i=1;i<=n;i++)
        s+=x*i/fact(i);
    printf("The sum of srises=>%d\n",s);

}
