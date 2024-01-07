#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int find_max(int x, int y, int z);
int find_min(int x, int y, int z);

int main(int argc, char *argv[]) {
	
	
	int num1,num2,num3;
	int max, min;
	
	printf("Please enter the three numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	max = find_max(num1,num2,num3);
	min = find_min(num1,num2,num3);
	
	printf("Max number is %d\n",max);
	printf("Min number is %d\n",min);

	return 0;
}

int find_max(int x, int y, int z)
{
	
	if(x > y && x > z)
	{
		return x;
	}
	else if(y > z)
	{
		return y;
	}
	else
	{
		return z;
	}
}

int find_min(int x, int y, int z)
{
	
	if(x < y && x < z)
	{
		return x;
	}
	else if(y < z)
	{
		return y;
	}
	else
	{
		return z;
	}
}
