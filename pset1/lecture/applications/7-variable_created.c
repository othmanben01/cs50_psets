#include <cs50.h>
#include <stdio.h>

// if your function you want create is not in the library. So, created a custom function like it did here for the square function.
// the custom function is standardized. for this example: is standardized for a the parameter 'n'.

int square(int n);

int main(void)

{

    int x = get_int("x: ");
    printf("the square of %i is %i ", x, square(x));
}

// The custom function scrated

int square(int n)

{

    return n*n;


}

