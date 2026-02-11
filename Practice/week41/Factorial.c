//to Find Factorial of a Number
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Number: ");
    int ans = 1;
    int x = 1;
    do
    {
        ans *= x;
        x++;
    }
    while (x <= num);
    printf("Answer = %i\n", ans);
}