#include <cs50.h>
#include <stdio.h>
#include <string.h>




int main(void)

{
    //get an number from user.



    //convert the number to an array


    int unsorted[7] = {5, 2, 10, 50, 13, 12};
    unsorted[6] = '\0';

    int x, y;
    x = get_int("give me an integer: ");


    for (int i = 0; i < 6; i++)
    {

        if(unsorted[i] == x)
        {

            printf("%i located in placement %i\n", unsorted[i], i + 1);
            y = 1;
        }


    }

    if (y != 1)
    {

        printf("No founded\n");

    }

}