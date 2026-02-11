#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char text = get_char("Text: ");

    if((text >= 'A' && text <= 'Z') || (text >= 'a' && text <= 'z'))
    {
        printf("Alphabet\n");
    }
}
