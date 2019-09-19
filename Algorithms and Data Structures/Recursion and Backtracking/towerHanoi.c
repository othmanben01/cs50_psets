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
void towerHanoi(int n, int a, int b, int c);

/*
 * Global variables
*/

/*
 * Start program
*/

int main(int argc, char* argv[]) {

    towerHanoi(3, 1, 2, 3);


}

/*
 * Functions
*/
//Program Functions

void towerHanoi(int n, int a, int b, int c)
{
    if (n == 1)
    {
        printf("Move disk from %i to %i \t\tusing %i\n", a, c, b);
        return;
    }

    towerHanoi(n - 1, a, c, b);
    towerHanoi(1, a, b, c);
    towerHanoi(n - 1, b, a, c);

}

