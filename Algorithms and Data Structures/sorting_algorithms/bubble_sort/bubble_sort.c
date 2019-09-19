#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

/*
 * Prototypes
*/

/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    //create an array with values
    int A[6] = {5, 2, 1, 9, 45, 1};

    //sorting the array using selection sort

    for (int i = 5; i > 0; i--)
    {

        for (int j = 0; j < 5; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }

    }
    //print out the result
    for (int i = 0; i < 6; i++)
    {
        printf("%i\t", A[i]);
    }
    printf("\n");

}

/*
 * Functions
*/
