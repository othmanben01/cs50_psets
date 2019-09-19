//binary search program using recursive method
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

/*
 * Prototypes
*/
bool binary_search(int A[], int length, int key, int l, int h);

/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    //create an array with values
    int A[8] = {1,2,3,4,5,6,7,8};

    //sorting the array using binary search
    //print out the result
    printf("%i\n", binary_search(A, 8, 1, 0, 7));

}

/*
 * Functions
*/

bool binary_search(int A[], int length, int key, int l, int h)
{

    if (l == h)
    {
        if (A[l] == key)
            return true;
        else
            return false;
    }
    else
    {
        int mid = (l + h) / 2;
        if (A[mid] == key)
            return true;
        else if (A[mid] < key)
        {
            l = mid + 1;
            return binary_search(A, length, key, l, h);
        }
        else
        {
            h = mid - 1;
            return binary_search(A, length, key, l, h);
        }
    }

}
