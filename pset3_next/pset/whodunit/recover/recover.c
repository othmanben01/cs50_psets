#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(void)
{
    // ensure proper usage

    FILE *inptr = fopen("card.raw", "r");

    if (inptr == NULL)
    {
        printf("Error opening the file\n");
        return 1;
    }

    // read infile's HEADERJPEG
    uint8_t block[512];
    size_t size = 0;
    int i = 0;


    char filename[8];
    FILE *img = NULL;
    while (((size = fread(block, 1, 512, inptr)) == 512))
    {

        if ((block[0] == 0xff) && (block[1] == 0xd8) && (block[2] == 0xff) && (block[3] & 0xf0) == 0xe0)
        {

            // open a new JPEG and checkpoint
            sprintf(filename, "%03i.jpg", i);
            img = fopen(filename, "w");
            if (img == NULL)
            {
                fclose(inptr);
                fprintf(stderr, "Could not create %s.\n", filename);
                return 3;
            }

            i++;
        }

        if (img != NULL)
        {
            fwrite(block, 1, 512, img);
        }

    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(img);

    // success
    return 0;
}