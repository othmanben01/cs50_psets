#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    int sum, totalSum = 0, totalSum2 = 0, multiple, total, secondDigit, firstDigit;

    long long number = get_long_long("Your credit card number: ");

    long long digits = number;
    long long newNumber = number;
    long long newNumber2 = number;


    for (int i = 0; i < 8; i++)
    {

        secondDigit = (newNumber % 100) / 10;

        multiple = secondDigit * 2;


        if (multiple >= 10)

        {

            sum = (multiple / 10)  + (multiple % 10);

        }

        else

        {

            sum = multiple;

        }


        totalSum += sum;

        newNumber = newNumber / 100;

    }

    for (int i = 0; i < 8; i++)
    {

        firstDigit = newNumber2 % 10;
        newNumber2 = newNumber2 / 100;

        totalSum2 += firstDigit;

    }

    total = totalSum + totalSum2;



    long long mastercardDigitsIdentifiers = (digits - (digits % 100000000000000)) / 100000000000000;
    long long amexDigitsIdentifiers = (digits - (digits % 10000000000000)) / 10000000000000;
    long long visaDigitsIdentifiers1 = (digits - (digits % 1000000000000)) / 1000000000000;
    long long visaDigitsIdentifiers2 = (digits - (digits % 1000000000000000)) / 1000000000000000;



    if (total % 10 != 0 || number < 0 || number < pow(10, 12))
    {

        printf("INVALID\n");

    }

    else if (amexDigitsIdentifiers == 34 || amexDigitsIdentifiers == 37)
    {

        printf("AMEX\n");

    }

    else if (mastercardDigitsIdentifiers == 51 || mastercardDigitsIdentifiers == 52 || mastercardDigitsIdentifiers == 53
             || mastercardDigitsIdentifiers == 54 || mastercardDigitsIdentifiers == 55)
    {

        printf("MASTERCARD\n");

    }

    else if (visaDigitsIdentifiers1 == 4 || visaDigitsIdentifiers2 == 4)
    {

        printf("VISA\n");

    }

    else
    {
        printf("INVALID\n");

    }

}