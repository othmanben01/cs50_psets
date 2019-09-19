#include <cs50.h>
#include <stdio.h>
#include <string.h>




int main(void)

{
    //get an number from user.



    //convert the number to an array


    int unsorted[7] = {5, 2, 10, 50, 13, 12};
    unsorted[6] = '\0';
    int min = 0;
    int n = 6;




    for (int i = 1; i < n; i++)
    {


        for (int j = i; j > 0; j--)
        {


            if (unsorted[j] < unsorted[j - 1])
            {


                min = unsorted[j];

                unsorted[j] = unsorted[j - 1];

                unsorted[j - 1] = min;

            }

        }

    }

    printf("%i, %i, %i, %i, %i, %i\n", unsorted[0], unsorted[1], unsorted[2], unsorted[3], unsorted[4], unsorted[5]);

}