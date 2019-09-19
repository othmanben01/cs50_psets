//merge sort algorithm
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

/*
 * Prototypes
*/
int* merge_sort(int A[], int B[], int length_A, int length_B);

/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    //create an array with values
    int A[6] = {2,8,15,18,25,54};
    int B[4] = {1,5,12,17};

    //merging the 2 Array in a sorted order
    int *C = merge_sort(A, B, 6, 4);

    //print out the result
    for (int k = 0; k < 10; k++)
    {
        printf("%i\t", C[k]);
    }
    printf("\n");
}

/*
 * Functions
*/

int* merge_sort(int A[], int B[], int length_A, int length_B)
{
    int* C = malloc(length_A + length_B);
    int i = 0, j = 0, k = 0;

    while((i < length_A) && (j < length_B))
    {
        if (A[i] == B[j])
        {
            C[k++] = A[i++];
            C[k++] = B[j++];
        }
        else if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    while(i < length_A)
    {
        C[k++] = A[i++];
    }

    while( j < length_B)
    {
        C[k++] = B[j++];
    }

    return C;
}
