#include <stdio.h>

int d = 0;
// I need this cuz im lazy. This is to set the difficulty modifier.

void Play();
void Difficulty();
void Quit();



int main()
{
	int choice = 0;
	
	printf("Welcome to my game\n");
	printf("Please choose an option\n");
	printf("1. Play\n2. Difficulty: %d\n3. Quit\n",d);
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			Play();
			break;
		case 2:
			Difficulty();
			break;
		case 3:
			printf("Please close the command prompt");
			break;
		default:
			printf("Since you are such a clown I'll assume you meant play.\n");
			Play();
			break;
	}
	
	return 0;
}

void Play()
{
	printf("You are now playing");
}

void Difficulty()
{
	int x
	printf("You are now changing the difficulty");
	printf("Please choose a new difficulty of any number below 100")
	scanf("%d", &x);
	
	if(x <=100)
		d == x;
	else
		printf("That number is either too large or negative please enter a new number.");
	
	
	
}