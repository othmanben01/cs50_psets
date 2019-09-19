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

    int **q = (int**) malloc(sizeof(int*) * 3);

    q[0] = (int*) malloc(sizeof(int) * 4);
    q[1] = (int*) malloc(sizeof(int) * 4);
    q[2] = (int*) malloc(sizeof(int) * 4);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            q[i][j] = i;


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%i\t", q[i][j]);
        printf("\n");
    }

}

/*
 * Functions
*/
