#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, rnum, mem_num;
	int sum = 0, digit_num = 0;
	
	printf("Please enter the number:  ");
	scanf("%d",&num);
	
	rnum = num;
	mem_num = num;
	while(num != 0)
	{
		num /=10;
		digit_num++;
	}
	while(rnum != 0)
	{
		sum += pow(rnum % 10, digit_num);
		rnum /= 10;
	}
	
	if(mem_num == sum)
		printf("This number is Armstrong number :)");
	else
		printf("This number is not Armstrong number :(");

	return 0;
}
