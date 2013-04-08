#include <stdio.h>

int currencyMachine(const int number)
{
	if(number == 0)
	{
		return 1;
	} else {
		return currencyMachine(number / 2) + currencyMachine(number / 3) + currencyMachine(number / 4);
	}
}

int main(int argc, char *argv[])
{
	int coinCount = currencyMachine(aoit(argv[1]));
	printf("Number of coins: %d", cointCount);
	return 0;
}