#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr_size, i, j;
	int arr[99], mem;
	
	printf("Please enter the array size : ");
	scanf("%d",&arr_size);
	
	for(i = 0; i < arr_size; i++)
	{
		printf("Please enter the %d. element of array : ",i+1);
		scanf("%d", &arr[i]);
	}

	
	for(i = 0; i < arr_size; i++)
	{
		for(j = i+1; j < arr_size; j++)
		{
			if(arr[j] < arr[i])
			{
				mem = arr[i];
				arr[i] = arr[j];
				arr[j] = mem;
			}
		}
	}

	for(i = 0; i < arr_size; i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}
