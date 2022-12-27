#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n,s=0,x;
    printf("Enter any number to 1!+2!...+n! :");
    scanf("%d",&n);
    for (x=1;x<=n;x++)
        s+=fact(x);
    printf("The sum of srises=>%d\n",s);

}
