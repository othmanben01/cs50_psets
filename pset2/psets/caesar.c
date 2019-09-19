#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main(int argc, char* argv[])
{

    //checkpoint for the key
    if (argc != 2)
        return 1;

    //printout the user for a string
    printf("Input: ");
    char *plaintext = get_string();

    //save the key
    int key = atoi(argv[1]);

    //encryption of the text with the given key
    for (int i = 0; i < strlen(plaintext); i++)
    {

        if (isalpha(plaintext[i]) && isupper(plaintext[i]))
        {
            plaintext[i] = ((plaintext[i] - 'A' + key) % 26) + 'A';
        }

        else if (isalpha(plaintext[i]) && islower(plaintext[i]))
        {
            plaintext[i] = ((plaintext[i] - 'a' + key) % 26) + 'a';
        }
    }

    //return the encipher text to the user

    printf("Output: %s\n", plaintext);
}
