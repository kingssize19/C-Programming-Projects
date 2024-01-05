#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Turkish");		//sets the local settings of the program to Turkish
	
	int choice;
	double num1, num2, result;
	
	
	printf("******** CALCULATOR ********\n\n");
	
	printf("[0] --> Exit\n");
	printf("[1] --> Addition\n");
	printf("[2] --> Subtraction\n");
	printf("[3] --> Multiplication\n");
	printf("[4] --> Division\n");
	printf("[5] --> Modulus\n");
	printf("[6] --> Exponentiation\n");
	
	
	while(1)
	{
		printf("\nPlease enter your choice [0-6] : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 0:
			
				goto outside;
				break;
			
			
			case 1:
				printf("Please enter the two numbers : ");
				scanf("%lf %lf",&num1,&num2);
				result = num1 + num2;
				printf("Result = %.2lf\n",result);
				break;
			
			case 2:
				printf("Please enter the two numbers : ");
				scanf("%lf %lf",&num1,&num2);
				result = num1 - num2;
				printf("Result = %.2lf\n",result);
				break;
			
			case 3:
				printf("Please enter the two numbers : ");
				scanf("%lf %lf",&num1,&num2);
				result = num1 * num2;
				printf("Result = %.2lf\n",result);
				break;
				
			case 4:
				printf("Please enter the two numbers : ");
				scanf("%lf %lf",&num1,&num2);
				if(num2 != 0)
				{
					result = num1 / num2;
					printf("Result = %.2lf\n",result);
				}
				else
				{
					printf("Cannot divide by zero!\n");
				}
				break;
			
			case 5:
				printf("Please enter the two numbers : ");
				scanf("%lf %lf",&num1,&num2);
				result = fmod(num1,num2);
				printf("Result = %.2lf\n",result);
				break;
				
			case 6:
				printf("Please enter the two numbers : ");
				scanf("%lf %lf",&num1,&num2);
				result = pow(num1,num2);
				printf("Result = %.2lf\n",result);
				break;
			
			default:
				printf("invalid Choice!!!\n");
			
		}
	
	}
	
	outside:
		
	return 0;
}
