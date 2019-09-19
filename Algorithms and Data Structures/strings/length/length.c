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
void print(int* A, int start, int end);
int lengthString(char* A);


/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    char str[20];
    printf("Give me a String:\t");
    scanf("%s", str);

    printf("The length of your String is:\t%i\n", lengthString(str));

}

/*
 * Functions
*/

//General Purpose
void print(int* A, int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        printf("%i  ", A[i]);
    }

    printf("\n");
}


//Program Functions

int lengthString(char* A)
{
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {

    }

    return i;

}

