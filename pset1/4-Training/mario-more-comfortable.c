#include <cs50.h>
#include <stdio.h>

int main(void) {

int x;

do

{ x = get_int("Please, give an height between 0 and 23 inclusif: "); }

while (x < 0 || x >23);

printf("\n");

//print new lines
for(int height = 0; height < x; height++){


    printf("\n");

        //print spaces for left pyramid
        for(int space = 0; space < x - 1 - height; space++) {printf(" "); }

        //print hashes for left pyramid
        for(int hashes = 0; hashes < height + 2; hashes++) { printf("#"); }

        //print gap
        printf("  ");

        //print hashes for right pyramid
        for(int hashes = 0; hashes < height + 2; hashes++) { printf("#");}


}

//print new line
printf("\n");

}