/* Stack ADT: a list with the restricction that insertion and deletion
can be performed only from one end, called the top*/
/*Operations:
1) Push(x)
2) Pop()
3) Top() = head
4) IsEmpty
This 4 operations are constant time O(1)
************inserting node at the beginningof the linked list***************
*/
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <cs50.h>
#include "stack_linked_list.h"


//Global variables
node* head = NULL;


//Prototypes
node* NewNode(int value, node* next);
void Push(int value);
void Pop(void);


int main(void)
{
    //push onto some values
    Push(5);
    Push(20);
    Push(54);
    Push(100);
    Push(200);

    //pop off the last added node
    Pop();
    Pop();

    //print out the values of the linked list
    node* temp = head;
    printf("This is the values of the linked list: \t\t");
    while (temp != NULL)
    {
        printf("%i    ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}


//pushing a node at the biginning of the linked list
void Push(int value)
{
    //check point if the value exceed (int)
    if ((value >= INT_MAX) || (value <= INT_MIN))   return;

    //check if the head is NULL
    if (head == NULL)
    {
        head = NewNode(value, NULL);
    }
    //if head is not NULL then add a new node to the beginning
    else
    {
        head = NewNode(value, head);
    }
    return;
}

//pop of the last added node into the linked list
void Pop(void)
{
    //create a temp node for keep tracking
    node* temp = head;
    //temp pointe to the next node
    temp = temp->next;
    //free the last added node
    free(head);
    //head point to the new last added node
    head = temp;
    return;
}


//creating a new node struct
node* NewNode(int value, node* next)
{
    //creating a new node with a check point
    node* temp = (node*) malloc(sizeof(node));
    if (temp == NULL)   return NULL;
    temp->value = value;
    temp->next = next;

    //returning the pointer to the new node
    return temp;
}

//chek if the linked list is empty
bool IsEmpty(void)
{
    if (head == NULL)   return true;
    else    return false;
}

