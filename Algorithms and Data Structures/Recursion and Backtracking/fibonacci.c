//Fibonacci
#include <stdio.h>

//fibonacci sequence using iterative method
int fib(int n)
{
    int t0 = 0,t1 = 1,s = 0,i;

    if(n <= 1)
        return n;

    for(i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

//fibonacci sequence using recursive method
int rfib(int n)
{
    if(n <= 1)
        return n;

    return rfib( n - 2) + rfib( n - 1);
}

//fibonacci sequence using memoization method

int A[1000];
int fib(int n) {

    if (n == 1 || n == 0) {
        A[n] = n;
        return n;
    }

    if (A[n] != -1)
        return A[n];

    int r = fib(n-1) + fib(n-2);
    A[n] = r;
    return r;

}
int main()
{
 int i;
 for(i=0;i<10;i++)
 F[i]=-1;

 printf("%d \n",mfib(5));
 return 0;
}