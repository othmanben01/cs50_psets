#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int x;

    do
    {
        x = get_int("Please, give an height between 0 and 23 inclusif: ");

    }

    while (x < 0 || x > 23);

    for (int height = 0; height < x; height++)
    {

        //print spaces
        for (int space = 0; space < x - 1 - height; space++)
        {

            printf(" ");

        }

        //print hashes
        for (int hashes = 0; hashes < height + 2; hashes++)
        {

            printf("#");

        }

        printf("\n");


    }


}