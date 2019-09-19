#include <cs50.h>
#include <stdio.h>

// |for|: is like "repeat x times" in scratch.
// |int i = 0|: is such you say: "Hey computer, give me a variable, call it i and initialize it to 0."
// |i < 50|: is such you say "Hey computer, just to be safe, is i less than 50 ?". It's a Boolean expression (true or false).
// |i++|: is a conventional way to say "Hey computer, go ahead and change i's value by 1".
int main(void){

    for (int i = 0; i < 50; i++)

    {
         printf("%i",i);
    }
}