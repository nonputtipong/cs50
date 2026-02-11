#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int num1 = get_int("input number1: ");
	int num2 = get_int("input number2: ");
	printf("%i\n", num1/num2);
	printf("%i\n", num1%num2);
}