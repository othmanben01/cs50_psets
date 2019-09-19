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

    char str[20];
    printf("\n");
    printf("Give me a String:\t");
    scanf("%s", str);

    printf("\n");
    printf("Choose an Option:\n");
    printf("1 - To Convert your String into UPPERCASE Case\n");
    printf("2 - To Convert your String into LOWERCASE Case\n");
    printf("3 - To CAPITALIZE your String\n");
    printf("4 - To Convert your String into Toggle Case");
    printf("\n");

    int option;
    printf("Your Option:\t");
    scanf("%i", &option);
    printf("\n");

    switch(option) {

        case 1:
            toUpper(str);
            break;
        case 2:
            toLower(str);
            break;
        case 3:
            toCapit(str);
            break;
        case 4:
            toToggle(str);
            break;

    }

    printf("\n");
    printf("\n");

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

void toUpper(char* A)
{
    for (int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] >= 97 && A[i] <= 122)
            A[i] = A[i] - ('a' - 'A');
    }
    printf("%s", A);
}

void toLower(char* A)
{
    for (int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] >= 65 && A[i] <= 90)
            A[i] = A[i] + ('a' - 'A');
    }
    printf("%s", A);
}

void toCapit(char* A)
{
    if (A[0] >= 97 && A[0] <= 122)
        A[0] = A[0] - ('a' - 'A');

    printf("%s", A);
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
    printf("%s", A);
}