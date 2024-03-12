#include <stdio.h>
#include <stdlib.h>

#define num 51

int func(int x)
{
	if (x > num)
		return 3 * (x - num);
	else
		return (num - x);
}

int main(int argc, char *argv[]) {
	
	int ival;
	
	printf("Please enter the number : ");
	scanf("%d",&ival);

	printf("Result = %d\n",func(ival));
	
	return 0;
}
