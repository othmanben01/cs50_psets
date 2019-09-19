/* Stack ADT: a list with the restricction that insertion and deletion
can be performed only from one end, called the top*/
/*Operations:
1) Push(x)
2) Pop()
3) Top()
4) IsEmpty
This 4 operations are constant time O(1)
*/
#include <stdio.h>
#include <cs50.h>

//Constant variables
#define MAX_SIZE 20
int size = -1;

//Prototypes
void Push(int value, int *A);
bool IsEmpty(int *A);
int Top(int *A);
void Pop(int *A);

//Global variable
int B[MAX_SIZE];


int main(void)
{

    //asking the user for how many integer want to add
    int howMany;
    printf("How many integer do you need to store in the array: \t");
    scanf("%i", &howMany);
    if (!howMany)   return -1;



    //scan the values in the array
    for (int i = 0; i < howMany; i++)
    {
        printf("the integer n(%i) :\t", i+1);
        int x = 0;
        scanf("%i", &x);
        if (!x) return -2;
        Push(x, B);
    }
    printf("\n");

    Pop(B);

    //print out all the values in the array
    for (int i = 0; i <= size; i++)
    {
        printf("the integer in the position (%i) is:\t %i\n", i+1, B[i]);
    }

    //print out the last element
    printf("The Top position is: \t%i\n", Top(B));

}

/*boolean expression which return false when the array is empty,
and true is the array is not*/

bool IsEmpty(int *A)
{
    if ( Top(A) == -1 )
    {
        return true;
    }
    else {
        return false;
    }
}


//return the value of the last element in the stack array
int Top(int *A)
{
    return B[size];
}


//poping off the last position in the array
void Pop(int *A)
{
    size--;
    return;
}

//pushing on the stack a value
void Push(int value, int *A)
{
    *(A + (++size)) = value;
    return;
}