#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;
    do
    {
        num = get_int("Num: ");
        count++;
    }
    while(count < 10);
}