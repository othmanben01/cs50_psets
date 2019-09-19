#include <cs50.h>
#include <stdio.h>
#include <string.h>




int main(void)

{
    //get an number from user.



    //convert the number to an array


    int unsorted[7] = {5, 2, 10, 50, 13, 12};
    unsorted[6] = '\0';

    int swap = -1;

    int x = 5;

    while (swap != 0)
    {

        swap = 0;

        for (int i = 0; i < x; i++)
        {

            int greater = 0;
            int smallest = 0;

            if (unsorted[i] > unsorted[i + 1])
            {

                greater = unsorted[i];
                smallest = unsorted[i + 1];

                unsorted[i] = smallest;
                unsorted[i + 1] = greater;

                swap++;
            }

        }

        x--;


    }

    printf("%i, %i, %i, %i, %i, %i\n", unsorted[0], unsorted[1], unsorted[2], unsorted[3], unsorted[4], unsorted[5]);


}