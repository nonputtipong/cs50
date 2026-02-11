#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = get_int("Number: ");

	if(number%2 == 0)
	{
		printf("Even\n");
	}
	else if(number%2 != 0)
	{
		printf("Odd\n");
	}
}