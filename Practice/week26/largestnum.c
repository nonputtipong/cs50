#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x, y, z;
    x = get_int("x = ");
    y = get_int("y = ");
    z = get_int("z = ");

    if(x >= y && x >= z)
    {
        printf("x\n");
    }
    else if(y >= x && y >= z)
    {
        printf("y\n");
    }
    else
    {
        printf("z\n");
    }
}