//to Check Whether a Number is Even or Odd
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Number: ");

    if (num%2 == 0)
    {
        printf("Even number\n");
    }
    else if (num%2 != 0)
    {
        printf("Odd number\n");
    }
}