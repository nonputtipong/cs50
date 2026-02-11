// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password);

int b, c, d, e;

for (int i = 0; i < strlen(password); i++)
{
    if (isupper(password[i]))
    {
        b = 1;
    }
    else if (islower(password[i]))
    {
        c = 1;
    }
    else if (isalpha(password[i]))
    {
        d = 1;
    }
    else if (isdigit(password[i]))
    {
        e = 1;
    }
}

int a = b + c + d + e;
if (a == 4)
{
    return true;
}
else
{
    return false;
}
