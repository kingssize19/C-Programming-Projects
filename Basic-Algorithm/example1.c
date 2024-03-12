#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y)
{
	if (x == y)
		return 3 * (x + y);
	
	else
		return x + y;
}




int main(int argc, char *argv[]) {
	
	
	int ival1, ival2;
	
	printf("Please enter the two numbers: ");
	scanf("%d%d",&ival1, &ival2);	
	
	printf("Result = %d",sum(ival1, ival2));
	
	
	return 0;
}
