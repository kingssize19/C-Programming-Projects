#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int num;
	
	printf("Please enter the number : ");
	scanf("%d",&num);
	
	if(num % 2 == 0)
		printf("This number is Even.");
	else
		printf("This number is Odd.");
	
	
	
	
	return 0;
}
