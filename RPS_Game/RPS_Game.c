#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Turkish");
	int pc_choice, user_choice, pc_score = 0, user_score = 0;
	srand(time(NULL));
	
	printf("*** ROCK - PAPER - SCISSORS ***\n\n");
	printf("{0} ROCK\n");
	printf("{1} PAPER\n");
	printf("{2} SCISSORS\n\n");
	printf("{3} EXIT\n");
	
	while(1)
	{
		printf("Please enter your choice : ");
		scanf("%d",&user_choice);
		
		if(user_choice == 3)
		{
			printf("Exiting.....\n");
			exit(0);
		}	
		else if(user_choice < 0 || user_choice > 3)
		{
			printf("Error!! Please try again.\n\n");
		}
		else
		{
			pc_choice = rand() % 3;
			
			if(pc_choice == user_choice)
			{
				pc_score = pc_score;
				user_score = user_score;
			}
			else if((pc_choice == 1 && user_choice == 0) || (pc_choice == 0 && user_choice == 2) || (pc_choice == 2 && user_choice == 1))
			{
				pc_score++;
			}
			else
			{
				user_score++;
			}
		
		
			switch(user_choice)
			{
				case 0:
					printf("User Choice : ROCK(Taþ)\t");
					break;
				case 1:
					printf("User Choice : PAPER(Kaðýt)\t");
					break;
				case 2:
					printf("User Choice : SCISSORS(Makas)\t");
					break;
				default:
					break;
			}
		
			switch(pc_choice)
			{
				case 0:
					printf("PC Choice : ROCK(Taþ)\n");
					break;
				case 1:
					printf("PC Choice : PAPER(Kaðýt)\n");
					break;
				case 2:
					printf("PC Choice : SCISSORS(Makas)\n");
					break;
				default:
					break;
			}
		
			printf("User Score : %d		PC Score : %d\n\n ",user_score, pc_score);
		}
		
	
	}
	
	
	
	
	
	
	return 0;
}
