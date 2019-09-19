#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    n = get_int("integer: ");
    int array[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%i", &array[i]);
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%i\n", array[i]);
    }
}