#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = -1;
    while (height > 8 || height < 1)
    {
        height = get_int("Height: ");
    }

    for (int i = 0, j = height - 1; i < height; i++, j--)
    {
        for (int k = 0; k < 2; k++)
        {
            if (k == 0)
            {
                if (j != 0)
                {
                    for (int l = 0; l < j; l++)
                    {
                        printf(" ");
                    }
                }
                for (int m = 0; m <= i; m++)
                {
                    printf("#");
                }
                printf("  ");
            }
            else
            {
                for (int m = 0; m <= i; m++)
                {
                    printf("#");
                }
            }
        }
        printf("\n");
    }
}