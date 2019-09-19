#include <cs50.h>
#include <stdio.h>
#include <math.h>


//--------------------------------------------------------------------------
//scale: 1$ = 100 cents.
int main(void)
{

    int amount = 0;
    int qQuarters = 0, qDimes = 0, qNickels = 0, qPennies = 0, coinUsed = 0;

    //prompt user for an amount of change
    do
    {
        amount = get_float("Your amount ? ");
    }

    //conditions
    while (amount <=  0);

//--------------------------------------------------------------------------

    amount = amount * 10000;
    amount = ceil(amount);

    float x = amount;

    //quarters quantity
    while (x - 2500 >= 0)
    {

        x -= 2500;
        qQuarters++;

    }


    //dimes quantity
    while (x - 1000 >= 0)
    {

        x -= 1000;
        qDimes++;

    }


    //nickels quantity
    while (x - 500 >= 0)
    {

        x -= 500;
        qNickels++;

    }


    //pennies quantity
    while (x - 100 >= 0)
    {

        x -= 100;
        qPennies++;

    }



    coinUsed = qQuarters + qDimes + qNickels + qPennies;

    //print numbers of coins used
    printf("%i\n", coinUsed);

}

