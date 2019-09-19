#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//global variables
node* head = NULL;


//prototypes

void Print(node* first);
node* NewNode(int value);
void AddToList(int value, node* first);
void InsertNode(int position, int value);
void DeleteNode(int position);
void Reverse(node* ptr);



int main(void)
{
    node* ptr1 = NULL;
    //feeding head with
    AddToList(2, head);
    AddToList(8, head);
    AddToList(5, head);
    InsertNode(3, 100);
    InsertNode(1, 300);
    InsertNode(5, 400);
    AddToList(1, head);

    //print out the list
    printf("The linked list:\t\t       \t");
    Print(head);
    printf("\n");

    //deleting a node
    printf("After deleting the first element:\t");
    DeleteNode(1);
    Print(head);
    printf("\n");

    //print out the values of the linked list
    printf("After reversing the list:       \t");
    Reverse(head);
    Print(head);
    printf("\n");

}

//reverse a linked list
void Reverse(node* p)
{
    //node* head_new;

    if (p->next == NULL)
    {
        head = p;
        return;
    }

    else
    {

        Reverse(p->next);
        node* q = p->next;
        q->next = p;
        p->next = NULL;
    }

}




//delete a position
void DeleteNode(int position)
{
    node* ptr = head;

    //if the position is 1 then:
    if (position == 1)
    {
        head = ptr->next;
        free(ptr);
        return;
    }

    //else point to the n-1 position
    for (int i = 1; i < position - 1; i++)
    {
        ptr = ptr->next;
    }

    //point to the n position
    node* ptr1 = ptr->next;

    //delete
    ptr->next = ptr1->next;
    free(ptr1);

}



//InsertNode a node at the nth position
void InsertNode(int position, int value)
{

    node* ptr = head;
    node* ptr1 = NewNode(value);

    //InsertNode a node at the begining of the linked list
    if (position == 1)
    {
        ptr1->next = head;
        head = ptr1;
        return;

    }


    //iterate over the linked list until the position wished
    for (int i = 1; i <= position - 2; i++)
    {
        ptr = ptr->next;
    }

    //InsertNode the node
    ptr1->next = ptr->next;
    ptr->next = ptr1;

}



//Add a new node to the list
void AddToList(int value, node* first)
{

    //if there is no node, then add a node to the first
    if (head == NULL)
    {
        head = NewNode(value);
    }

    //add a new node to the list
    else
    {
        node* ptr = head;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = NewNode(value);
    }

}



//create a new node
node* NewNode(int value)
{

    node* ptr = (node*) malloc(sizeof(node));
    ptr->value = value;
    ptr->next = NULL;

    return ptr;
}



/*print function which print the values of a linked list,
feeding by the head pointer*/
void Print(node* first)
{
    if (first == NULL) return;

    printf("%i\t", first->value);
    Print(first->next);

}



