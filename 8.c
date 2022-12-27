#include<stdio.h>
#include<conio.h>
int sum_series(int n)
{
    int i,s=0;
    for (i=1;i<=n;i++)
        s+=(i*(i+1)*(i+2));
    return s;
}
//1*2*3+2*3*4+3*4*5+4*5*6+.....
int main()
{
    int n;
    printf("Enter number of terms in series=>");
    scanf("%d",&n);
    n=sum_series(n);
    printf("Sum of given series=>%d",n);
}
