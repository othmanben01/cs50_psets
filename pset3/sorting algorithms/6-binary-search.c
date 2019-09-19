#include <cs50.h>
#include <stdio.h>
#include <string.h>




int main(void)

{
    //get an number from user.



    //convert the number to an array


    int unsorted[8] = {1, 2, 4, 8, 10, 12, 16};
    unsorted[7] = '\0';

    int target = 11;

    int start = 0;
    int mid_point = 0;
    int end = 6;

    mid_point = end / 2;

    while (target != unsorted[mid_point] && end > mid_point)
    {

        if ( target > unsorted[mid_point])
        {

            start = mid_point + 1;

            mid_point = (start + end) / 2;

        }

        else if (target < unsorted[mid_point])
        {

            end = mid_point - 1;

            mid_point = (start + end) / 2;

        }


    }


    if (target == unsorted[mid_point])
    {

        printf("%i with midpoint = %i\n", unsorted[mid_point], mid_point);

    }

    else
    {

        printf("Sorry, don't found it \n");

    }



}