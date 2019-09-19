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
void duplicates(int* A, int length);

/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {


    int A[9] = {3, 6, 8, 8, 10, 12, 15, 15, 15};

    duplicates(A, 9);

    return 0;
}

/*
 * Functions
*/


//this function will print the duplicate numbers


// [3, 6, 8, 8, 10, 12, 15, 15, 15]
//        ^
//        i      j
void duplicates(int* A, int length)
{
    int dupl = 0, j = 0;
    for (int i = 0; i < length - 1; i++)
    {
        //check if duplicates
        if (A[i] == A[i + 1])
        {
            j = i + 1;
            while(A[j] == A[i])
            {
                j++;
                dupl++;
            }

            printf("The element %i is duplicated %i times\n", A[i], dupl);
            dupl = 0;
            i = j;
        }

    }
}

