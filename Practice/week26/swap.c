#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int num1 = get_int("a = ");
	int num2 = get_int("b = ");
	printf("%i, %i\n", num1-(num1-num2) , num2+(num1-num2));
}