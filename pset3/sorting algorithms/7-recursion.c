#include <cs50.h>
#include <stdio.h>



int collatz(int n);
int counter = 0;


int main(void)
{


    int integer;
    printf("Give me an integer: ");
    integer = get_int();
    collatz(integer);
    printf("%i \n", counter);



}



int collatz(int n)
{


    if (n == 1)
    {
        return 1;
    }

    else if (n % 2 == 0)
    {
        n = n / 2;
        counter++;
        return collatz(n);
    }


    else if (n % 2 != 0)
    {
        n = (3 * n) + 1;
        counter++;
        return collatz(n);

    }

    else
    {
        return 0;
    }


}



