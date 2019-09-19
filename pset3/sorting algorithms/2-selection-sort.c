#include <cs50.h>
#include <stdio.h>
#include <string.h>




int main(void)

{



    int unsorted[7] = {5, 2, 10, 50, 13, 12};
    unsorted[6] = '\0';

    int min;

    for (int j = 0; j < 5; j++)
    {
        for (int i = j; i < 5; i++)
        {

            min = unsorted[j];


            if (min > unsorted[i + 1])
            {

                min = unsorted[i + 1];
                unsorted[i + 1] = unsorted[j];
                unsorted[j] = min;


            }


        }

    }


    printf("%i, %i, %i, %i, %i, %i\n", unsorted[0], unsorted[1], unsorted[2], unsorted[3], unsorted[4], unsorted[5]);

}