#include <stdio.h>

// Difficulty Modifier
int d = 0;

//Player Stuff
int champ = 0;
int Health = 100;
int Damage = 20;
int Heals = 3;

//Enemy Stuff
int EHp = 0;
int EDmg = 0;

//Functions
void Play();
void CharSel();
int battle();
void Difficulty();
void Quit();
void Menu();
void slimedif();
void skeletondif();
void dragondif();
void sleep();



int main()
{
	Menu();
	return 0;
}

void Menu()
{
	int choice = 0;
	
	printf("Welcome to my game\n");
	printf("Please choose an option\n");
	printf("1. Play\n2. Difficulty: %d\n3. Quit\n >:",d);
	scanf("%d", &choice);

	// Unsure if this is the best way to do this, but I think it is more practical than the if, ifelse method.
	switch(choice)
	{
		case 1:
			Play();
			break;
		case 2:
			Difficulty();
			break;
		case 3:
			printf("Please exit the CMD");
			break;
		default:
			printf("Since you are such a clown I'll assume you meant play.\n");
			Play();
			break;
	}	
	
}

int battle(int a, int b)
{

	int choice = 0;
	
	for(a = a; a > 0; a = a+1)
	{
		if(a >= 0)
		{
			printf("...................................................................\n");
			printf("Your current health is %d\n", Health);
			printf("You also have %d health potions left over\n", Heals);
			printf("The monster's Current Health is %d\n", a);
			printf("1. Attack	2.Use health Potion	3. Run Away\n");
			scanf("%d", &choice);
			
			switch(choice)
			{
				case 1:
					printf("You attack the monster and deal %d damage to it!\n",Damage);
					a = a - (Damage + 1);
					break;
				case 2:	
					if(Heals > 1)
					{
						printf("You use a Health Potion");
						Health = Health + 50;
						Heals = Heals - 1;
						printf("You have %d Health Pots Left",Heals);
						break;
					}
					else
					{
						printf("You do not have any Health Pots Left\n");
						break;
					}
				case 3:
					printf("You have chosen to run away. Like the little bug you are, I feel bad for you.");
					return 1;
				default:
					printf("You have entered the wrong number please try again between 1 and 3");
					break;
			}
			//Enemy Attack
			
			if(a <= 0)
			{
			printf("You have defeated the monster\n");
			return 2;
			}
			else if(Health <=0)
			{
			printf("Game Over you lose\n");
			return 3;
			}
			else if(Health > 0 && a > 0) 
			{
				Health = Health - EDmg;
				printf("The enemy attacks and deals %d damage to you.\n",EDmg);
			}
			else
			{
				printf("How did this happen you twat?\n");
				return 2;
				
			}
		}
	}
}

void slimedif()
{
	EHp = 10 + (d * 10);
	EDmg = 1 + (d * 2);
}

void skeletondif()
{
	EHp = 20 + (d * 15);
	EDmg = 5 + (d * 4);
}

void dragondif()
{
	EHp = 100 + (d * 25);
	EDmg = 10 + (d * 10);
}

void sleep()
{

	printf("You have decided to sleep for the night\n");
	printf("You will now heal to max HP\n");
	printf("ZZZzzzZZZzzzZZZzzzZZZzzz....\n");
	if (champ == 1)
	{
		Health = 150;
	}
	else
	{
		Health = 50;
	}
}

void Play()
{
	int SlimeHP,SkeletonHP, DragonHP = 0;
	int SlimeDMG, SkeletonDMG, DragonDMG = 0;
	int enemy = 0;
	int sleepyn = 0;
	CharSel();
	printf("...................................................................\n");
	printf("You start your adventer towards a cave and encounter a slime\n");
	slimedif();
	printf("Upon closer inspection it has HP of %d and Damage of %d\n",EHp,EDmg);
	printf("You are forced into a fight What do you do?\n");
	switch(battle(EHp, EDmg))
	{
		case 1:
			printf("WOW YOU RAN OMG, just exit the program and save me some time\n");
		case 2:
			printf("Would you like to sleep for the night to recover HP?\n");
			printf("1. Yes\n2. No\n>:"); 
			scanf("%d", &sleepyn);
				if(sleepyn == 1)
				{
					sleep();
				}
				else if(sleepyn == 2)
				{
					break;
				}
				else
				{
					printf("You have entered the wrong number so you will sleep anyways\n");
					sleep();
				}
			break;
		case 3:
			printf("Please Close the Command Prompt\n");
			return;
	}
	printf("You continue your adventer into the cave and encounter a Skeleton\n");
	skeletondif();
	printf("Upon closer inspection it has HP of %d and Damage of %d\n",EHp,EDmg);
	printf("You are forced into a fight What do you do?\n");
	switch(battle(EHp, EDmg))
	{
		case 1:
			printf("WOW YOU RAN OMG, just exit the program and save me some time\n");
		case 2:
			printf("Would you like to sleep for the night to recover HP?\n");
			printf("1. Yes\n2. No\n>:"); 
			scanf("%d", &sleepyn);
				if(sleepyn == 1)
				{
					sleep();
				}
				else if(sleepyn == 2)
				{
					break;
				}
				else
				{
					printf("You have entered the wrong number so you will sleep anyways\n");
					sleep();
				}
			break;
		case 3:
			printf("Please Close the Command Prompt\n");
			return;
	}
	printf("After a while in the cave you enter a larger room and encounter a Dragon\n");
	dragondif();
	printf("Upon closer inspection it has HP of %d and Damage of %d\n",EHp,EDmg);
	printf("You are forced into a fight What do you do?\n");
	switch(battle(EHp, EDmg))
	{
		case 1:
			printf("WOW YOU RAN OMG, just exit the program and save me some time\n");
		case 2:
			printf("Would you like to sleep for the night to recover HP?\n");
			printf("1. Yes\n2. No\n>:"); 
			scanf("%d", &sleepyn);
				if(sleepyn == 1)
				{
					sleep();
				}
				else if(sleepyn == 2)
				{
					break;
				}
				else
				{
					printf("You have entered the wrong number so you will sleep anyways\n");
					sleep();
				}
			break;
		case 3:
			printf("Please Close the Command Prompt\n");
			return;
	}
	
	printf("Congratz you won! Good Job!\n");
	return;
	
	
}

void CharSel()
{
	int choice = 0;

	printf("Welcome!\n Please Choose a Character:\n");
	printf("1. Warrior - Has more health but less damage\n");
	printf("2. Rogue - Has more damage but has less health\n");
	printf("3. Mage(WIP) - Has less health and does less physical damage but more spell damage\n");
	// Plans to add spells and different attack methods later.
	scanf("%d", &choice);
	// I seperated them into different printf for formating in the code and that reason only.

	switch(choice)
	{
		case 1:
			printf("You have chosen the Warrior Class!\n");
			printf("You have +50 HP and -10 Damage\n");
			Health = 150;
			Damage = 10;
			champ = 1;
			break;
		case 2:
			printf("You have chosen the Rogue Class!\n");
			printf("You have -50 HP and +10 Damage\n");
			Health = 50;
			Damage = 30;
			champ = 2;
			break;
		case 3:
			printf("Sorry this Character is not implemented\nPlease choose a different one.\n");
			CharSel();
			break;
		default:
			printf("You have entered the wrong number please try again between 1 and 3");
			CharSel();
			break;
	}
}

void Difficulty()
{
	int x;
	printf("You are now changing the difficulty\n");
	printf("Please choose a new difficulty of any number below 100\n >:");
	scanf("%d", &x);
	// I recommend that you don't go above anything like 5 because it gets really hard after that.
	if(x >= 0 && x <= 100)
		d = x + d;
	else
		printf("That number is either too large or negative please enter a new number.");	
	
	printf("Your New Difficulty is %d.\n",d);
	Menu();
}