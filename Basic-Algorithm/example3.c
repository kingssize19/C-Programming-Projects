#include <stdio.h>
#include <stdlib.h>


int func(int x, int y)
{
	if (x == 30 || y == 30 || x + y == 30)
		return 1;
	else
		return 0;
}



int main(int argc, char *argv[]) {
	
	int ival1, ival2;
	
	printf("Please enter the two numbers: ");
	scanf("%d%d",&ival1, &ival2);
	
	printf("Result = %d\n",func(ival1, ival2));
	
	return 0;
}
