#include <stdio.h>

int main(){
	int num,i,j;
	scanf("%d", &num);              	                  // Reading input from STDIN
	//printf("Input number is %d.\n", num);
	for(i=0;i<num;i++)
	{
		for (j=0;j<num;j++)
		{
			if(i+j==num-1 || i==0 || i==num-1 )
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}  // Writing output to STDOUT
}
