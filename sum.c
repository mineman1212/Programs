#include <stdio.h>

int sum(int x, int y)
{
	return x+y;
}

int main()
{
	int x = sum(1,2);
	printf("Here is ur number = '%d'",x);
	return 0;
}