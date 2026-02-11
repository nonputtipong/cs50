#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num;
    int sum = 0;
    num = get_int("input: ");

    int i = 1;
    while(i <= num)
    {
        sum += i;
        i++;
    }
    printf("sum = %i\n", sum);
}