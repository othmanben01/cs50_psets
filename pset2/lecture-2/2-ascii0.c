#include <cs50.h>
#include <stdio.h>
#include <string.h>

//Note:     use (int) s[i]  to have the ASCII of a character. it make the char into an int.



int main(void)
{
    string s = get_string("input: ");

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c  %i\n", s[i], (int) s[i]);
    }
}