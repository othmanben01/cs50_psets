
// Helper functions for music

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "helpers.h"
#include <math.h>





// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    //2, 4, 8, 1
    int numerator = (int) fraction[0] - '0';
    int denominator = (int) fraction[2] - '0';


    //no fraction
    if (fraction == NULL)
    {
        return 1;
    }

    //fraction with 8 in denominator
    if (denominator == 8)
    {

        return numerator;

    }

    //fraction without 8 in denominator
    else if (denominator != 8)
    {
        numerator = (numerator * 8) / denominator;
        return numerator;

    }


    return 0;

}







// Calculates frequency (in Hz) of a note
int frequency(string note)
{

    if (note == NULL)
    {
        return -2;
    }

    float n = 0;
    float y = 0;
    int note_in_int = note[strlen(note) - 1] - '0';


    // Calculates frequency (in Hz) of a note
    if (note[0] == 'A')
    {
        if (note_in_int == 4)
        {

            n = 440 * pow(2.0, 0.0 / 12.0);
        }

        else if (note_in_int > 4)
        {
            y = 12 * (note_in_int - 4);
            n = 440 * pow(2.0, 0.0 / 12.0) * pow(2.0, y / 12.0);
        }

        else if (note_in_int < 4)
        {
            y = 12 * (4 - note_in_int);
            n = 440 * pow(2.0, 0.0 / 12.0) * pow(2.0, (-y / 12.0));
        }
    }


    else if (note[0] == 'B')
    {
        if (note_in_int == 4)
        {
            n = 440 * pow(2.0, 2.0 / 12.0);
        }

        else if (note_in_int > 4)
        {
            y = 12 * (note_in_int - 4);
            n = 440 * pow(2.0, 2.0 / 12.0) * pow(2.0, y / 12.0);
        }

        else if (note_in_int < 4)
        {
            y = 12 * (4 - note_in_int);
            n = 440 * pow(2.0, 2.0 / 12.0) * pow(2.0, (-y / 12.0));
        }
    }


    else if (note[0] == 'C')
    {
        if (note_in_int == 5)
        {
            n = 440 * pow(2.0, 3.0 / 12.0);
        }

        else if (note_in_int > 5)
        {
            y = 12 * (note_in_int - 5);
            n = 440 * pow(2.0, 3.0 / 12.0) * pow(2.0, y / 12.0);
        }

        else if (note_in_int < 5)
        {
            y = 12 * (5 - note_in_int);
            n = 440 * pow(2.0, 3.0 / 12.0) * pow(2.0, (-y / 12.0));
        }

    }

    else if (note[0] == 'D')
    {
        if (note_in_int == 5)
        {
            n = 440 * pow(2.0, 5.0 / 12.0);
        }

        else if (note_in_int > 5)
        {
            y = 12 * (note_in_int - 5);
            n = 440 * pow(2.0, 5.0 / 12) * pow(2.0, y / 12.0);
        }

        else if (note_in_int < 5)
        {
            y = 12 * (5 - note_in_int);
            n = 440 * pow(2, 5.0 / 12) * pow(2, (-y / 12.0));
        }

    }

    else if (note[0] == 'E')
    {
        if (note_in_int == 5)
        {
            n = 440 * pow(2, 7.0 / 12.0);
        }

        else if (note_in_int > 5)
        {
            y = 12 * (note_in_int - 5);
            n = 440 * pow(2, 7.0 / 12.0) * pow(2.0, y / 12.0);
        }

        else if (note_in_int < 5)
        {
            y = 12 * (5 - note_in_int);
            n = 440 * pow(2, 7.0 / 12.0) * pow(2.0, (-y / 12.0));
        }

    }

    else if (note[0] == 'F')
    {
        if (note_in_int == 5)
        {
            n = 440 * pow(2, 8.0 / 12.0);
        }

        else if (note_in_int > 5)
        {
            y = 12 * (note_in_int - 5);
            n = 440 * pow(2, 8.0 / 12.0) * pow(2, y / 12.0);
        }

        else if (note_in_int < 5)
        {
            y = 12 * (5 - note_in_int);
            n = 440 * pow(2, 8.0 / 12.0) * pow(2, (-y / 12.0));
        }
    }

    else if (note[0] == 'G')
    {
        if (note_in_int == 5)
        {
            n = 440 * pow(2, 10.0 / 12.0);
        }

        else if (note_in_int > 5)
        {
            y = 12 * (note_in_int - 5);
            n = 440 * pow(2, 10.0 / 12.0) * pow(2, y / 12.0);
        }

        else if (note_in_int < 5)
        {
            y = 12 * (5 - note_in_int);
            n = 440 * pow(2, 10.0 / 12.0) * pow(2, (-y / 12.0));
        }

    }

    // include accidentales


    if (note[1] == '#')
    {
        n = round(n * pow(2.0, 1.0 / 12.0));
    }

    else if (note[1] == 'b')
    {
        n = round(n * pow(2.0, (-1.0 / 12.0)));
    }

    else
    {
        n = round(n);
    }


    return n;

}


// Determines whether a string represents a rest
bool is_rest(string s)
{

    //returning false if
    if (strncmp(s, "", 1))
    {
        return 0;
    }

    //return true if
    else
    {
        return 1;
    }


}





