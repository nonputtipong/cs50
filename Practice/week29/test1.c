#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num;
    int sum = 0;
    int count = 0;
    do
    {
        num = get_int("Number: ");
        sum = sum + num;
        count++;
    }
    while (count < 10);
    sum = sum / 10;
    printf("Answer: %i\n", sum);
}