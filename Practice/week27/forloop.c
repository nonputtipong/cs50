#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Input: ");
    int sum = 0;
    for(int i = 1; i <= 5; i++)
    {
        printf("%i", i);
    }
    // for(int i = 1; i <= num; i++)
    // {
    //     sum += i;
    // }
    printf("%i\n", sum);
}