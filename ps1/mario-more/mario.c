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
    //i for height, j for space before each level
    {
        for (int k = 0; k < 2; k++)
        //loop for right half and left half
        {
            if (k == 0)
            //for left half
            {
                if (j != 0)
                //if Height is one, skip output space before each level
                {
                    for (int l = 0; l < j; l++)
                    //print space before each level
                    {
                        printf(" ");
                    }
                }
                for (int m = 0; m <= i; m++)
                //print left half #
                {
                    printf("#");
                }
                printf("  ");
                //space between left half and right half
            }
            else
            {
                for (int m = 0; m <= i; m++)
                //print right half #
                {
                    printf("#");
                }
            }
        }
        printf("\n"); //new line before next level
    }
}