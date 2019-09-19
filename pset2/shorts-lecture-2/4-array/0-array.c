#include <cs50.h>
#include <stdio.h>






int main(void)
{

    // array declaration
    int array[100];

    for(int i = 0; i < 100; i++)
    {

        array[i] = i;

        printf(",%i ", array[i]);


    }


}