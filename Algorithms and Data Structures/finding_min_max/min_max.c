#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
/*
 * Structs
*/
struct Array {
    int* A;
    int size;
    int length;
};

/*
 * Prototypes
*/
void print(int* A, int start, int end);
bool isSorted(struct Array arr1);
void findMinMax(struct Array arr1);

/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    //creating an array
    struct Array arr1;
    printf("How many elements do you will inter:\t");
    scanf("%i", &arr1.length);
    arr1.size = arr1.length;
    arr1.A = (int*) malloc(sizeof(int) * arr1.size);

    //feeding the array with the user inputs
    for (int i = 0; i < arr1.length; i++)
    {
        printf("Please, Give me the %i integer:\t", i + 1);
        scanf("%i", &arr1.A[i]);
    }
    printf("\n");

    //print out all the elements entered by the user
    printf("You entered...................\n");
    print(arr1.A, 0, arr1.length - 1);
    printf("\n");

    //finding min and max
    printf("Finding All Duplicates........\n");
    findMinMax(arr1);

    printf("\n");
    return 0;
}

/*
 * Functions
*/

//General Purpose Functions
void print(int* A, int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        printf("%i  ", A[i]);
    }

    printf("\n");
}

bool isSorted(struct Array arr1)
{
    for (int i = 0; i < arr1.length - 1; i++)
    {
        if(arr1.A[i] > arr1.A[i+1])
            return false;
    }

    return true;

}

//Algorithm Functions
void findMinMax(struct Array arr1)
{
    if (isSorted(arr1))
    {
        printf("The Min of the Array is:\t%i\n", arr1.A[0]);
        printf("The Max of the Array is:\t%i\n", arr1.A[arr1.length - 1]);
        return;
    }

    int min, max;
    min = max = arr1.A[0];

    for (int i = 0; i < arr1.length; i++)
    {
        if (arr1.A[i] < min)
            min = arr1.A[i];

        else if (arr1.A[i] > max)
            max = arr1.A[i];
        else
            continue;
    }

    printf("The Min of the Array is:\t%i\n", min);
    printf("The Max of the Array is:\t%i\n", max);

}