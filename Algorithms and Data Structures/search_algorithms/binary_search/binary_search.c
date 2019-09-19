//binary search program using iterative method
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

/*
 * Prototypes
*/
bool binary_search(int A[], int length, int key);

/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    //create an array with values
    int A[8] = {1,2,3,4,5,6,7,8};

    //sorting the array using insertion sort
    //print out the result
    printf("%i\n", binary_search(A, 8, 7));

}

/*
 * Functions
*/

bool binary_search(int A[], int length, int key)
{

    int l = 0, h = length - 1;

        while (l <= h)
        {
            int mid = (l + h) / 2;

            if (A[mid] == key)
                return true;
            else if (A[mid] < key)
                l = mid + 1;
            else
                h = mid - 1;
        }

        return false;

}
