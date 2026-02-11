// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        char Non = tolower(argv[1][i]);
        if(Non == 'a') printf("6");
        else if(Non == 'e') printf("3");
        else if(Non == 'i') printf("1");
        else if(Non == 'o') printf("0");
        else printf("%c",argv[1][i]);
    }
    return 0;
}
