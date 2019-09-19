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
void diceSumHelper(int n, int j, int* result, int sum);
void diceSum(int n, int sum);
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
int count = 0;
/*
 * Start program
*/

int main(int argc, char* argv[]) {

    diceSum(3, 7);
    printf("\nThe number of Calls is:\t%i\n", count);

}

/*
 * Functions
*/


void diceSumHelper(int n, int j, int* result, int sum)
{
    count++;
    static int s[] = {1, 2, 3, 4, 5, 6};
    int length = j;
    if (sum < 0 || (n == 0 && sum > 0))
    {
        return;
    }

    else if (n == 0)
    {
        for (int i = 0; i < length; i++)
            printf("%i", result[i]);

        printf("\n");
        return;
    }

    for (int i = 0; i < 6; i++)
    {
        result[j] = s[i];
        diceSumHelper(n - 1, j + 1, result, sum - result[j]);
    }

}

void diceSum(int n, int sum) {

    int *result = (int*) malloc(sizeof(int) * n);

    diceSumHelper(n, 0, result, sum);
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



