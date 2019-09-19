#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
/*
 * Structs
*/


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

    //create a pointer array
    int *p = (int *) malloc(sizeof(int) * 5);

    //feeding the array with values
    for (int i = 0; i < 5; i++)
        p[i] = i;

    //create a larger array
    int *q = (int *) malloc(sizeof(int) * 10);
    //feeding the array with p values
    for (int i = 0; i < 5; i++)
        q[i] = p[i];

    free(p);
    p = q;
    q = NULL;


    //print out the result
    for (int i = 0; i < 10; i++)
        printf("%i\t", p[i]);



    printf("\n");

}

/*
 * Functions
*/
