#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
/*
 * Structs
*/


/*
 * Prototypes
*/
void reverseSentence(char* s, int j);
char *gets(char *str);
void print(int* A, int start, int end);
int lengthString(char* A);
void toUpper(char* A);
void toLower(char* A);
void toCapit(char* A);
void toToggle(char* A);

/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    reverseSentence("Rosa are red ", 0);
}

/*
 * Functions
*/

void reverseSentence(char* s, int j)
{

}


void print(int* A, int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        printf("%i  ", A[i]);
    }

    printf("\n");
}

//String functions
int lengthString(char* A)
{
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {

    }

    return i;

}

void toUpper(char* A)
{
    for (int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] >= 97 && A[i] <= 122)
            A[i] = A[i] - ('a' - 'A');
    }
}

void toLower(char* A)
{
    for (int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] >= 65 && A[i] <= 90)
            A[i] = A[i] + ('a' - 'A');
    }
}

void toCapit(char* A)
{
    if (A[0] >= 97 && A[0] <= 122)
        A[0] = A[0] - ('a' - 'A');

}

void toToggle(char* A)
{
    for (int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] >= 97 && A[i] <= 122)
            A[i] = A[i] - ('a' - 'A');

        else if(A[i] >= 65 && A[i] <= 90)
            A[i] = A[i] + ('a' - 'A');
    }
}

//Program Functions



