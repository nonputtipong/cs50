#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num;
    int sum = 0;
    num = get_int("multiply: ");

    int i = 1;
    while(i <= 12)
    {
         = num * i;
        i++;
    }
    printf("ans = %i\n", num);
}