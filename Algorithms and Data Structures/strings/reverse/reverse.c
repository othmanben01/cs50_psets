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
char *gets(char *str);
void print(int* A, int start, int end);
void RReverse(char* A, int length,  int m, int start);
/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    //get a string from the user
    char str[1000];
    printf("\n");
    printf("Give me a String:\t");
    gets(str);

    RReverse(str, strlen(str), (strlen(str) - 1), 0);
    printf("%s\n", str);
}

/*
 * Functions
*/


void print(int* A, int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        printf("%i  ", A[i]);
    }

    printf("\n");
}

//Program Functions

void RReverse(char* A, int length,  int m, int start)
{

    if (start >= length)
        return;

    char ch = A[m];
    RReverse(A, length, m - 1, start + 1);
    A[start] = ch;
    return;
}

