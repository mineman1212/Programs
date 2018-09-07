#include <stdio.h>

int fib(int n)
{
	if( n == 1 || n == 2)
	{
		return n - 1;
	}
		
	else
	{
		return (fib(n-2) + fib(n-2));
	}
}


int main()
{
	int ans, a;
	printf("What number do you want from the fib sequence?\n");
	scanf("%d",&a);
	ans = fib(a);
	printf("Here is your number : %d\n",ans);
	return 0;
}