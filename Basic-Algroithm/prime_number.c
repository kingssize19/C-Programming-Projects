#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, number, counter = 0;
	int arr[99], k = 0;
	
	printf("Please enter the number : ");
	scanf("%d",&number);
	
	
	for(i = 1; i <= number; i++)
	{
		
		for(j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				counter++;
			}
		}
		
		if(counter == 2)
		{
			arr[k] = i;
			k++;
		}
		
		counter = 0;
	
	}
	
	//Printing prime numbers on the screen
	i=0;
	while(arr[i] != '\0')
	{
		printf("%d ",arr[i]);
		i++;
	}
	
	
	return 0;
}
