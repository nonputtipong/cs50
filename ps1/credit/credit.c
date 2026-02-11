#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = get_long("Number: "), first_two;

    int digit = 0, chk1 = 0, chk2 = 0;
    //chk2 is second-to-last digit

    for (long i = number; i != 0;)
    {
        digit++;
        i /= 10;
    }

    for (long i = number; i >= 100; i /= 10)
    {
        first_two = i / 10;
    }


    for (int i = 0; number != 0; i++)
    {
        if (i % 2 == 0)
        {
            chk1 += number % 10;
            number /= 10;
        }
        else
        {
            int temp = number % 10 * 2;
            chk2 += temp / 10;
            chk2 += temp % 10;
            number /= 10;

        }
    }



    if ((chk1 + chk2) % 10 != 0)
    {
        printf("INVALID\n");
    }
    else
    {
        if (first_two == 34 || first_two  == 37)
        {
            if (digit == 15)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (first_two >= 51 && first_two <= 55)
        {
            if (digit == 16)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (first_two / 10 == 4)
        {
            if (digit == 16 || digit == 13)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
}