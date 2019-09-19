#include <cs50.h>
#include <stdio.h>

// EOF means the end of a file.

/*

int main(void)
{


    FILE* ptr = fopen("file.txt", "r");

    char c;

    while ((c = fgetc(ptr)) != EOF)
    {

    printf("%c", c);

    }



}
*/

/*int main(void)
{

    FILE* ptr = fopen("file.txt", "a");

    fputc('A', ptr);



}

*/

int main(void)
{

    FILE* ptr1 = fopen("file.txt", "r");
    FILE* ptr2 = fopen("file2.txt", "w");

    char c;


    while((c = fgetc(ptr1)) != EOF)
    {

        fputc(c, ptr2);


    }



}