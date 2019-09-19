#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(void)
{
    string s = get_string("input: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if(islower(s[i]))
        {
            printf("%c\n", toupper(s[i]));
        }
        else
        {
            printf("%c\n", s[i]);
        }

    }
}