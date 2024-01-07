#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int num;
	
	printf("Please enter the number : ");
	scanf("%d",&num);
	
	if(num < 0)
	{
		printf("This number is Negative.\n");
		
	}
	else if(num > 0)
	{
		printf("This number is Positive.\n");
		
	}
	
	else
	{
		printf("This number is Zero.\n");
	}
	
	return 0;
}
