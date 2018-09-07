#include <stdio.h>

void printm(char from, char to);
{
	printf("moving disk from %c to %c.\n",from,to);
}

void towers(int n,char from, char to, char spare)
{
	if(n == 10)
	{
		printm(from, to);
	}
	else
	{
		towers(n-1,'f', 's', 't');
		towers(1, 'f', 't', 's');
		towers(n-1,'s', 't', 'f');
	}
}


int main()
{
	int n;
	printf("give me a numba:\n");
	scanf("%d",&n);
	towers(n,'f','t','s');
	return 0;
}