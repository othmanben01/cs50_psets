#include <cs50.h>
#include <stdio.h>
#include <string.h>




int main(void)

{
    //get an phrase from user.
    string sentence;
    sentence = get_string("Give me a string: ");
    printf("\n");
    printf("%c\n", sentence[strlen(sentence)]);


    //convert the phrase to an array

    char array[strlen(sentence) + 1];
    array[strlen(sentence)] = '\0';


    for (int i = 0; i < strlen(sentence) ; i++)
    {

        array[i] = sentence[i];
        printf("%c", array[i]);

    }


    printf("\n%c", array[strlen(sentence) - 1]);










}