#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int num, fact = 1, rnum;
	
	here:
	printf("Please enter the number : ");
	scanf("%d",&num);
	
	rnum = num;
	
	if(num == 1)
	{
		printf("%d! = 1",num);
	}
	
	else if(num == 0)
	{
		printf("%d! == 1", num);
	}
	
	else if(num > 1)
	{
		while(num > 0)
		{
			fact *= num;
			num--;
		}
	
		printf("%d! = %d", rnum, fact);
	}
	
	else
	{
		printf("Don't enter negative numbers, enter zero or positive numbers...\n");
		goto here;
	}
	
	
	return 0;
}
