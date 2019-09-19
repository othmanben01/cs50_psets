#include <cs50.h>
#include <stdio.h>
#include <math.h>

//--------------------------------------------------------------------------
//scale: 1$ = 100 cents.
int main(void) {

    float amount;
    int cents;
    int qDollars = 0, qQuarters = 0, qDimes = 0, qNickels = 0, qPennies = 0;

    //prompt user for an amount of change
    do {
            amount = get_float("Your amount ? ");
            cents = amount * 100;
       }

    //conditions
    while ( amount < 0 || amount *100 != cents );

//--------------------------------------------------------------------------


    //dollars quantity
    while ( cents - 100 >= 0 ) {

        cents -= 100;
        qDollars++;
    }

    //quarters quantity
    while (cents - 25 >= 0)  {

        cents -= 25;
        qQuarters++;

    }

    //dimes quantity
    while (cents - 10 >= 0)  {

        cents -= 10;
        qDimes++;

    }

    //nickels quantity
    while (cents - 5 >= 0)  {

        cents -= 5;
        qNickels++;

    }

    //pennies quantity
    while (cents - 1 >= 0)  {

        cents -= 1;
        qPennies++;

    }

    //print numbers of coins used
    printf("You get %i Dollars, and %i Quarters, %i Dimes, %i Nickels, %i Pennies \n", qDollars, qQuarters, qDimes, qNickels, qPennies );

//--------------------------------------------------------------------------


}