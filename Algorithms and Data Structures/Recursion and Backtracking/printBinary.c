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
void printBinary(int digits);
void printBinaryHelper(int digits, int j, char *result);
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

    printBinary(4);

}

/*
 * Functions
*/


void printBinaryHelper(int digits, int j, char *result)
{
    static char s[] = {'0', '1', '\0'};
    if (digits == 0)
    {
        result[j] = '\0';
        printf("%s\n", result);
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        result[j] = s[i];
        printBinaryHelper(digits - 1, j + 1, result);
    }
}


void printBinary(int digits) {

    char *result = (char*) malloc(sizeof(char) * (digits + 1));

    printBinaryHelper(digits, 0, result);
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



