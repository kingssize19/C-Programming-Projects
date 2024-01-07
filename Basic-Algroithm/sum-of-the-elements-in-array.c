#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr_size, i, sum = 0;
	int arr[99];
	
	printf("Please enter the array size : ");
	scanf("%d",&arr_size);
	
	for(i = 0; i < arr_size; i++)
	{
		printf("Please enter the %d. element of array : ",i+1);
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < arr_size; i++)
	{
		sum += arr[i];
	}
	
	printf("The sum of the array is %d ",sum);


	return 0;
}
