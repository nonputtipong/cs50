#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int product = 1;
    int num = get_int("input");

    int i = 1;
    while (i <= num)
    {
        product *= i;
        i++;
    }
    product = product * i;
    printf("Product = %i\n", product);
}