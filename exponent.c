#include <stdio.h>

int power(int b, int e)
{
	if(e == 1)
	{
		return b;
	}
	else
	{
		return b * power(b,e-1);
	}
}




int main()
{
	int a,b;
	printf("What base number you want?\n");
	scanf("%d",&a);
	printf("What exponent number you want?\n");
	scanf("%d",&b);
	printf("Here is your answer : %d\n",power(a,b));
	
	return 0;
}