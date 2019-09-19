// Integer Arithmetic

#include <cs50.h>
#include <stdio.h>


int main(void)

{
    // Prompt user for x

    int x = get_int("x: ");

    // Prompt user for y

    int y = get_int("y: ");

    // Perform Arithmetic

    printf("%i plus %i equal %i\n", x, y, x + y);

    printf("%i minus %i equal %i\n", x, y, x - y);

    printf("%i times %i equal %i\n", x, y, x * y);

    printf("%i divided by %i equal %i\n", x, y, x / y);

    printf("remainder of %i diveded by %i equal %i\n", x, y, x % y);

    // Other performances

    printf("%i + %i\n", 10, x + 10 + y);


}
