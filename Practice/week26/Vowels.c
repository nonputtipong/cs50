#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("alphabet: ");

    if(c == 'a'| c == 'e'| c == 'i'| c == 'o'| c == 'u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
}