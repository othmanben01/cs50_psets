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
void printBinary(int digits, int i);
void printDigits(int digits, int i);
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

    printDigits(2, 0);

}

/*
 * Functions
*/



void printBinary(int digits, int i) {

    static char s[3];

    if (digits <= 0)
    {
        s[i] = '\0';
        printf("%s\n", s);
        return;
    }

    s[i] = '0';
    printBinary(digits - 1, i + 1);
    s[i] = '1';
    printBinary(digits - 1, i + 1);

}



void printDigits(int digits, int i)
{
    static char s[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
    static char r[10000];

    if (digits == 0)
    {
        r[i] = '\0';
        printf("%s\n", r);
        return;
    }

    for (int j = 0; j < 10; j++)
    {
        r[i] = s[j];
        printDigits(digits - 1, i + 1);
    }

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



