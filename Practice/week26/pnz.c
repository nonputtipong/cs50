#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Number: ");

    if(num > 0)
    {
        printf("Positive\n");
    }
    else if(num < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
}