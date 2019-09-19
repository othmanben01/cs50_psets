#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//Prototype


int main(int argc, string argv[])
{

    //check out if the argc is 2
    if (argc != 2)
    {
        return 1;
    }

    //check out if the argv is alpha

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!(isalpha(argv[1][i])))
        {
            return 1;
        }
    }

    //let the user print in his plaintext
    printf("Plaintext : ");
    string plaintext = get_string();

    string key = argv[1];

    //creating the ciphertext array
    char cyphertext[strlen(plaintext) + 1];
    cyphertext[strlen(plaintext)] = '\0';

    int i = 0, j = 0;
    int n = strlen(key);

    //iterate over the plaintext until the end
    while (plaintext[i] != '\0')
    {

        //if the plaintext and the key are upper
        if (isalpha(plaintext[i]) && isupper(plaintext[i]) && isupper(key[j % n]))
        {
            cyphertext[i] = ((((plaintext[i] - 'A') + ((int) key[j % n]) - 'A') % 26) + 'A');
            j++;

        }

        //if the plaintext is upper and the key is lower
        else if (isalpha(plaintext[i]) && isupper(plaintext[i]) && islower(key[j % n]))
        {
            cyphertext[i] = (((((plaintext[i] - 'A') + ((int) key[j % n]) - 'a')) % 26) + 'A');
            j++;
        }

        //if the plaintext is lower and the key is upper
        else if (isalpha(plaintext[i]) && islower(plaintext[i]) && islower(key[j % n]))
        {
            cyphertext[i] = ((((plaintext[i] - 'a') + ((int) key[j % n]) - 'a') % 26) + 'a');
            j++;
        }

        //if the plaintext is lower and the key is upper
        else if (isalpha(plaintext[i]) && islower(plaintext[i]) && isupper(key[j % n]))
        {
            cyphertext[i] = ((((plaintext[i] - 'a') + ((int) key[j % n]) - 'A') % 26) + 'a');
            j++;
        }

        //the default
        else
        {
            cyphertext[i] = plaintext[i];
        }

        i++;
    }

    //print out the cyphertext
    printf("ciphertext: %s\n", cyphertext);

}