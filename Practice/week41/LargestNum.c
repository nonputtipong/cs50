//to Find the Largest Number Among Three Numbers
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a, b, c;
    a = get_int("a = ");
    b = get_int("b = ");
    c = get_int("c = ");

    if(a >= b && a >= c)
    {
        printf("a is the largest number.\n");
    }
    else if(b >= a && b >= c)
    {
        printf("b is the largest number.\n");
    }
    else
    {
        printf("c is the largest number.\n");
    }
}