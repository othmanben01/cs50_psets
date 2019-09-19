#include <cs50.h>
#include <stdio.h>

//|int main(void)| main: just copy and past.
//|%s|: is a place holder for a string.
//|string s = get_string("...")| means: store the return value of 'get_string' in the string varible called 's' "
//|"...%s\n", s|: means "put the parameter s called 's' in the place holder '%s' "

int main(void)

{
    string s = get_string("Name: ");
    printf("Hello, %s\n", s);
}