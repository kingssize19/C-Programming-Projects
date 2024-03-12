#include <stdio.h>
#include <stdlib.h>

int func(int x)
{
	if (x % 3 == 0 && x % 7 == 0)
		return 0;
	
	else if (x % 3 == 0 || x % 7 == 0)
		return 1;
	else
		return 0;
}


int main(int argc, char *argv[]) {
	
	int ival = 0;
	
	printf("Please enter the number: ");
	scanf("%d",&ival);
	
	printf("%d",func(ival));
	
	return 0;
}
