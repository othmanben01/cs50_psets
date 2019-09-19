//Taylor Series

#include <stdio.h>

//factorial function
int fact(int n)
{
    if(n==0)
        return 1;

    return fact(n-1)*n;
}

//power function
int power(int m,int n)
{
    if(n==0)
        return 1;

    return power(m,n-1)*m;
}

//Taylor Series using power and factorial function
double e(int x, int n) {

    if (n == 0)
        return 1;

    return e(x, n-1) + ((float) power(x, n) / fact(n));

}

//Taylor Series using Static variables
double e2(int x, int n)
{

    static double p = 1,f = 1;
    double r;

    if(n == 0)
        return 1;

    r = e2(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}


//Start Program
int main(void) {

    printf("%lf\n",e2(5, 10));

}