#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Name: ");
    int year = get_int("Year: ");
    printf("Name: %s, Year: %i\n", name, year);
}
