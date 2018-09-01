#include <stdio.h>

int factorial(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1);
	}

}




int main()
{
	int num;
	printf("Please enter an integer and we will find it's factorial: ");
	scanf("%d", &num);
	int ans = factorial(num);
	printf("Here is your number: %d",ans);

	return 0;
}