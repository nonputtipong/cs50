#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int z = 0;
    int x = get_int("Number: ");

    for (int y = 2; y <= x / 2; ++y)
    {
        if (x % y == 0)
        {
            z = 1;
            break;
        }
    }
        if (x == 1 || x == 0)
        {
            printf("%i isn't a prime number.\n", x);
        }
        else if (z == 0)
        {
            printf("%i is a prime number.\n", x);
        }
        else
        {
            printf("%i isn't a prime number.\n", x);
        }
}