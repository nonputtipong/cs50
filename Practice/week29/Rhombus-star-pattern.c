#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x, y ,z;
    int num = 5;
    int row;
    do
    {
        row = get_int("Row: ");
    }
    while (row != 5);
    for(x = 0; x < num; x++)
    {
        for(z = num - x; z != 0; z--)
        {
            printf(" ");
        }
        for(y = 0; y < num; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}