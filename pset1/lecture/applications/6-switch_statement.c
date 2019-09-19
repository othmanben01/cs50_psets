#include <cs50.h>
#include <stdio.h>

// switch replace if, else statement.
// Dont forget to use break.
// |break| means: because we don't have curly braces so we tell the computer with break: "make sure to don't execute everything below it, when the statement is satisfied ".
// 'Y': single quotes are used when we work with 1 single character.
// "The": double quotes are used when we work with multiple characters.


int main(void)

{

    char c = get_char("Y, or N? ");

    //Check the answer

    switch (c)

    {

        case 'Y':
        case 'y':
            printf("Yes\n");
            break;
        case 'N':
        case 'n':
            printf("No\n");
            break;

    }

}