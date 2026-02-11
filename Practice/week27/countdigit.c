#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Num: ");
    int count = 0;
    do
    {
        num = num/10;
        count = count + 1;
    }
    while(num!=0);
    printf("Digits = %i\n", count);
}