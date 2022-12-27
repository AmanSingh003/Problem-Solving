#include<stdio.h>
int main()
{
    char a[100],*j;
    printf("enter string:");
    scanf("%s",a);
    j=a;

    while (*j!='\0')
    {
        /* code */
        if(*j>=65 && *j<=90)
        {
            *j=*j+32;
        }
        else{
            *j=*j-32;
        }
    }

    printf("%s",a);

    return 0;
    

}