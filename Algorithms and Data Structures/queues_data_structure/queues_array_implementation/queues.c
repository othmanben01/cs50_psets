/* This program implement the queue data structure
Operations:
1) EnQueue(x) or Push(x)
2) DeQueue() or Pop()
3) Front() or Peek()
4) IsEmpty
The time complexity of all operations are **constant time** or O(1)
*/

#include <stdio.h>
#include <cs50.h>

//Constant variables
#define MAX_SIZE 5
//the front and the tail of the queue
int front = -1;
int rear = -1;

//Prototypes
int EnQueue(int value, int *A, bool (*p)());
bool IsEmpty(void);
int DeQueue(int *A, bool (*p)());
int Front(int *A, bool (*p)());


//Global variable
int B[MAX_SIZE];


int main(void)
{
    //asking the user for how many integer want to add
    int howMany;
    printf("How many integer do you need to store in the array: \t");
    scanf("%i", &howMany);
    if (!howMany)   return -1;


    int error;
    //scan the values in the queue
    for (int i = 0; i < howMany; i++)
    {
        printf("the integer n(%i) :\t", i+1);
        int x = 0;
        scanf("%i", &x);
        if (!x) return -2;
        error = EnQueue(x, B, IsEmpty);

        //if the queue is full then exit
        if (error == -1)
        {
            printf("the queue is full!\n");
            return -1;
        }
    }
    printf("\n");

    //dequeue the front position and check if the queue is already empty
    error = DeQueue(B, &IsEmpty);
    if (error == -2)
    {
        printf("The queue is already empty!\n");
        return -2;
    }
    // DeQueue(B, &IsEmpty);
    // DeQueue(B, &IsEmpty);
    // DeQueue(B, &IsEmpty);
    // DeQueue(B, &IsEmpty);

    //print out all the values in the array
    for (int i = front; i <= rear; i++)
    {
        printf("the integer in the position (%i) is:\t %i\n", i+1, B[i]);
    }

    //print out the last element
    printf("The Top position is:\t%i\n", Front(B, &IsEmpty));

}

/*boolean expression which return false when the queue is empty,
and true is the queue is not*/

bool IsEmpty(void)
{
    if (front > rear || (front == -1 && rear == -1))
    {
        return true;
    }
    else
    {
        return false;
    }
}


//return the value of the last element in the stack array
int Front(int *A, bool (*p)())
{
    bool isempty = p();
    if (isempty == true)    return 54854;
    else
    {
        return B[front];
    }
}

//poping off the last position in the array
int DeQueue(int *A, bool (*p)())
{
    if ((*p)() == true)    return -2;

    else
    {
        front = (front + 1) % MAX_SIZE;
        return 0;
    }
}

//pushing onto the queue a value at the rear
int EnQueue(int value, int *A, bool (*p)())
{
    //if the queue is empty, then increment the front
    if ((*p)() == true)
    {
        front++;
    }
    //if the queue is full then return and exit
    else if ((rear + 1) % MAX_SIZE == front)
    {
        return -1;
    }

    //increment the rear by 1, and enqueue the value
    rear++;
    *(A + (rear % MAX_SIZE)) = value;
    return 0;
}


