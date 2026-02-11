#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number1 = get_int("First Number: ");
    int number2 = get_int("Second Number: ");
    if (number1 > number2)
    {
        printf("Maximum is %i\n", number1);
    }
    else if(number1 < number2)
    {
        printf("Minimun is %i\n", number1);
    }
    else
    {
        printf("Same Number\n");
    }
}
