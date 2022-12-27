#include<stdio.h>
#include<conio.h>
int main()
{
    float salary,allow ;
    char grde;
    printf("Enter your Basic salary=>");
    scanf("%f",&salary);
    fflush(stdin);/* The code above takes only single input and gives the same result for the second input.
     Reason is because as the string is already stored in the buffer i.e.
      stream is not cleared yet as it was expecting string with spaces or new line. So, to handle this situation fflush(stdin) is used.

      the flush function will make a call to i/o which will make system slow .so dont use it untill nessaery*/
    printf("Enter your Grade=>");
    scanf("%c",&grde);
    if (grde=="A" || grde=="a")
      {
          allow=1700;
      }
    else if (grde=="B" || grde=="b")
     {
         allow=1500;
     }
    else
    {
        allow=1300;
    }
    printf("%d",salary);
    printf("Your Total salary =>%d",(int)(salary+(0.2)*salary+(0.5)*salary+allow-(0.11)*salary));
}
