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
void duplicatesSort(struct Array arr1);
void duplicates(struct Array arr1);

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

    //finding diplicates
    printf("Finding All Duplicates........\n");
    isSorted(arr1) ? duplicatesSort(arr1) : duplicates(arr1);

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
void duplicatesSort(struct Array arr1)
{
    int duplicate;
    for (int i = 0; i < arr1.length - 2; i++)
    {
        if(arr1.A[i] == arr1.A[i + 1])
        {
            duplicate = arr1.A[i];
            int j = i + 1;

            while (arr1.A[j] == arr1.A[j + 1])
            {
                j++;
            }

            printf("The element %i is duplicated %i times\n", duplicate, (j - i));

            i = j + 1;
        }
    }
}


void duplicates(struct Array arr1)
{
    for (int i = 0; i < arr1.length - 1; i++)
    {
        int x = arr1.A[i];
        int count = 0;

        if (arr1.A[i] == -1)
            continue;

        for (int j = i + 1; j < arr1.length; j++)
        {
            if (x == arr1.A[j])
            {
                arr1.A[j] = -1;
                count++;
            }
        }

        if (count > 0)
        {
            printf("The element %i is duplicated %i times\n", x, count);
        }

    }

}
