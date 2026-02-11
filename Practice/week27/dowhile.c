#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num1 = get_int("Num1: ");
    int num2;
    do
    {
        num2 = get_int("Num2: ");
    }
    while(num2 < num1);
}