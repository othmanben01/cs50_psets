#include <stdio.h>
#include <stdlib.h>
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
int voyelCount(char* A);
int consonentCount(char* A);
int wordsCount(char* A);
/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    char str[1000];
    printf("\n");
    printf("Give me a String:\t");
    gets(str);

    printf("\n");
    printf("Choose an Option:\n");
    printf("1 - To Count the Number of Words\n");
    printf("2 - To Count the Number of Voyels\n");
    printf("3 - To Count the Number of Consonents\n");
    printf("\n");

    int option;
    printf("Your Option:\t");
    scanf("%i", &option);
    printf("\n");

    switch(option) {

        case 1:
            wordsCount(str);
            break;
        case 2:
            voyelCount(str);
            break;
        case 3:
            consonentCount(str);
            break;

    }

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

int wordsCount(char* A)
{

    int count = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {

        if (A[i] == ' ')
        {
            int j = i;
            count++;

            while(A[j] == ' ')
            {
                j++;
            }
            i = j+1;
        }

    }

    count++;
    printf("%i\n", count);
    return count;
}


int voyelCount(char* A)
{
    int count = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'
            || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
            count++;
    }

    printf("%i\n", count);
    return count;
}


int consonentCount(char* A)
{
    int count = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (!(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'
            || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U') && ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122)))
            count++;
    }

    printf("%i\n", count);
    return count;
}