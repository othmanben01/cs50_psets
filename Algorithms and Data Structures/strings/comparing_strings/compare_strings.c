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
bool compareString(char* A, char* B);

/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    char str0[1000];
    char str1[1000];
    printf("\n");
    printf("Give me the first String:\t");
    gets(str0);
    printf("Give me the second String:\t");
    gets(str1);

    compareString(str0, str1) ? printf("The 2 Strings are the Same\n") : printf("The 2 Strings are Different\n");


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

bool compareString(char* A, char* B)
{
    if (strlen(A) != strlen(B))
        return false;

    for (int i = 0; i < strlen(A); i++)
    {
        if (A[i] != B[i])
            return false;
    }

    return true;
}