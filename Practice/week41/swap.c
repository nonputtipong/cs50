//to Swap Two Numbers
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num1 = get_int("Number1 = ");
    int num2 = get_int("Number2 = ");
    int x = num1;
    num1 = num2;
    num2 = x;

    printf("Number1 = %i\n", num1);
    printf("Number2 = %i\n", num2);
}