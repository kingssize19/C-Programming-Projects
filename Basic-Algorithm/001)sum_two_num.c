#include <stdio.h>
#include <stdlib.h>

int sum_two_num(int ival1, int ival2)
{
	return ival1 + ival2;
}

int main(int argc, char *argv[]) {
	
	int ival1, ival2;
	
	printf("Please enter the two numbers : ");
	scanf("%d%d", &ival1, &ival2);
	
	printf("%d + %d = %d", ival1, ival2, sum_two_num(ival1, ival2));
	
	return 0;
}
