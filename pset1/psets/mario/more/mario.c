#include "stdio.h"
#include "cs50.h"

int checkpoint(void);
void pyramid(int height);


int main(int argc, char const *argv[]) {
  /* prompt the user for a valid input */
  /*asking the user for a height in the domain [0, 23]*/
  int height = checkpoint();

  /*print out the pyramid*/
  /*print out the rows of the pyramid*/
  pyramid(height);

  return 0;
}


/*building the pyramid*/
void pyramid(int height)
{
  int spaces = height - 1;
  int hashes = 1;

  /* print out the rows of the pyramid */
  for (int j = 0; j < height; j++) {

    /*print out spaces of the pyramid*/
    for (int i = 0; i < spaces; i++) {
      /* print out spaces */
      printf(" ");
    }


    //print out hashes rows of the pyramid
    for (int i = 0; i < hashes; i++)
    {
      printf("#");
    }
    //print out some gap
    printf("  ");

    //print out again hashes rows of the pyramid
    for (int i = 0; i < hashes; i++)
    {
      printf("#");
    }

    // New line
    printf("\n");
    spaces--;
    hashes++;
  }
}


//checkpoint: asking the user for a valid height until is valid
int checkpoint(void)
{
  int x;
  do
  {
    x = get_int("Give me height: ");
  }
  while (x > 23 || x < 0);

  //return the valid height
  return x;
}
