#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100 

void low_encrypt(char *msg, int len) 
{
    int i;
    for (i = 0; i < len; i++)
	{
        msg[i] = msg[i] + 1;
    }
}

void low_decrypt(char *msg, int len) 
{
    int i;
    for (i = 0; i < len; i++) 
	{
        msg[i] = msg[i] - 1; 
    }
}

void middle_encrypt(char *msg, int len)
{
	int i;
	
	for(i = 0; i < len; i++)
	{
		if(i % 2 == 0)
		{
			msg[i] = msg[i] - 1;
		}
		else
		{
			msg[i] = msg[i] - 3;
		}
	}
}

void middle_decrypt(char *msg, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if(i % 2 == 0)
		{
			msg[i] = msg[i] + 1;
		}
		else
		{
			msg[i] = msg[i] + 3;
		}
	}
	
}

void high_encrypt(char *msg, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if(i % 2 == 0)
		{
			msg[i] = msg[i] + 7;
		}
		if(i % 3 == 0)
		{
			msg[i] = msg[i] - 8;
		}
		if(i % 4 == 0)
		{
			msg[i] = msg[i] + 2;
		}
		if(i % 5 == 0)
		{
			msg[i] = msg[i] - 6;
		}
	}
}



void high_decrypt(char *msg, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if(i % 2 == 0)
		{
			msg[i] = msg[i] - 7;
		}
		if(i % 3 == 0)
		{
			msg[i] = msg[i] + 8;
		}
		if(i % 4 == 0)
		{
			msg[i] = msg[i] - 2;
		}
		if(i % 5 == 0)
		{
			msg[i] = msg[i] + 6;
		}
	}
}

void master_encrypt(char *msg, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if(i % 2 == 0)
		{
			msg[i] = msg[i] - 6;
		}
		if(i % 3 == 0)
		{
			msg[i] = msg[i] + 8;
		}
		if(i % 4 == 0)
		{
			msg[i] = msg[i] + 2;
		}
		if(i % 5 == 0)
		{
			msg[i] = msg[i] - 1;
		}
	}
	
	strrev(msg);
	
	for(i = 0; i < len; i++)
	{
		if(i % 2 == 0)
		{
			msg[i] = msg[i] - 5;
		}
		if(i % 3 == 0)
		{
			msg[i] = msg[i] + 4;
		}
		if(i % 4 == 0)
		{
			msg[i] = msg[i] + 9;
		}
		if(i % 5 == 0)
		{
			msg[i] = msg[i] - 7;
		}		
	}
	
}
void master_decrypt(char *msg, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if(i % 2 == 0)
		{
			msg[i] = msg[i] + 5;
		}
		if(i % 3 == 0)
		{
			msg[i] = msg[i] - 4;
		}
		if(i % 4 == 0)
		{
			msg[i] = msg[i] - 9;
		}
		if(i % 5 == 0)
		{
			msg[i] = msg[i] + 7;
		}		
	}
	
	strrev(msg);
	
	for(i = 0; i < len; i++)
	{
		if(i % 2 == 0)
		{
			msg[i] = msg[i] + 6;
		}
		if(i % 3 == 0)
		{
			msg[i] = msg[i] - 8;
		}
		if(i % 4 == 0)
		{
			msg[i] = msg[i] - 2;
		}
		if(i % 5 == 0)
		{
			msg[i] = msg[i] + 1;
		}
	}
}

int main() {
    char msg[MAX_LENGTH];

    int choice;

    printf("***** Decoder-Encoder Machine *****\n\n");
	printf("[1] Low Level Encoder\n");
    printf("[2] Middle Level Encoder\n");
    printf("[3] High Level Encoder\n");
    printf("[4] Master Level Encoder\n\n");
    printf("[5] Low Level Decoder\n");
    printf("[6] Middle Level Decoder\n");
    printf("[7] High Level Decoder\n");
    printf("[8] Master Level Decoder\n\n");
    printf("[0] EXIT\n");
    
    while (1) {

        printf("Please enter your Choice : ");
        scanf("%d", &choice);

        switch (choice) {
        	
            		case 0:
                		printf("Exiting...\n");
                		exit(0);

           		case 1:
                		printf("Please enter the message: ");
                		getchar(); 
                		fgets(msg, sizeof(msg), stdin);
                		msg[strcspn(msg, "\n")] = '\0'; 

                		low_encrypt(msg, strlen(msg));
                		printf("Encrypted version of the message : %s\n", msg);
                		break;
			case 2:
				printf("Please enter the message: ");
				getchar();
				fgets(msg, sizeof(msg), stdin);
				msg[strcspn(msg, "\n")] = '\0';
				
				middle_encrypt(msg,strlen(msg));
				printf("Encrypted version of the message : %s\n",msg);
				break;
				
			case 3:
				printf("Please enter the message: ");
				getchar();
				fgets(msg, sizeof(msg), stdin);
				msg[strcspn(msg, "\n")] = '\0';
				
				high_encrypt(msg,strlen(msg));
				printf("Encrypted version of the message : %s\n",msg);
				break;
			case 4:
				printf("Please enter the message: ");
				getchar();
				fgets(msg, sizeof(msg), stdin);
				msg[strcspn(msg, "\n")] = '\0';
				
				master_encrypt(msg,strlen(msg));
				printf("Encrypted version of the message : %s\n",msg);
				break;	
				
          		  case 5:
              			printf("Please enter the Encrypted version of the message: ");
                		getchar(); 
                		fgets(msg, sizeof(msg), stdin);
                		msg[strcspn(msg, "\n")] = '\0';

                		low_decrypt(msg, strlen(msg));
                		printf("Decrypted version of the Encrypted message: %s\n", msg);
                		break;
			
			case 6:
				printf("Please enter the Encrypted version of the message: ");
				getchar();
				fgets(msg, sizeof(msg), stdin);
				msg[strcspn(msg,"\n")] = '\0';
				
				middle_decrypt(msg,strlen(msg));
				printf("Decrypted version of the Encrypted message: %s\n",msg);
				break;
				
			case 7:
				printf("Please enter the Encrypted version of the message: ");
				getchar();
				fgets(msg, sizeof(msg), stdin);
				msg[strcspn(msg,"\n")] = '\0';
				
				high_decrypt(msg,strlen(msg));
				printf("Decrypted version of the Encrypted message: %s\n",msg);
				break;
				
			case 8:
                		printf("Please enter the Encrypted version of the message: ");
                		getchar(); 
                		fgets(msg, sizeof(msg), stdin);
                		msg[strcspn(msg, "\n")] = '\0'; 

               			master_decrypt(msg, strlen(msg));
               			printf("Decrypted version of the Encrypted message: %s\n", msg);
               			break;
            		default:
                		printf("Invalid choice. Please try again.\n");
                		break;
        }
    }

    return 0;
}

