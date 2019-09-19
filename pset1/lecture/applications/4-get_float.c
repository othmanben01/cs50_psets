#include <cs50.h>
#include <stdio.h>

// float generally use 32bits which gives you that many 0's and 1's with which to represent a floating point value or a real number.
// double accept generally 64bits.
// int accept generally 32bits.
int main(void)

{

    float x = get_float("x: ");
    float y = get_float("y: ");

    //Perform division

    printf("%.0f divided by %.0f equal %.5f", x, y, x / y);

}


