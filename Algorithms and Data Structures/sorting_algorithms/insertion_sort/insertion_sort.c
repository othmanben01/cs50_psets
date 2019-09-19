//insertion_sort program using recursion

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

/*
 * Prototypes
*/
void insertion_sort(int A[], int length, int i, int j);

/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    //create an array with values
    int A[6] = {5, 2, 1, 9, 45, 1};

    //sorting the array using insertion sort
    insertion_sort(A, 6, 0, 1);

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

//sorting the array using insertion sort
void insertion_sort(int A[], int length, int i, int j)
{
    if (i == 5)
    {
        return;
    }

    int n = i;
    int m = j;

    while (n >= 0)
    {
        if (A[m] < A[n])
        {
            int temp = A[n];
            A[n] = A[m];
            A[m] = temp;
            m--;
        }
        n--;
    }

    return insertion_sort(A, length, ++i, ++j);

}
