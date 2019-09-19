/*some concepts:
root: the first node in the tree
children / parents / sibling: children of the same parent / leaf: node without children
ancestor and descendent
a tree has N nodes and N-1 edges (arrows or linkes)
Depth of x: No of edges in path from root to x.
Height: No of edges in longest path from x to leaf / height of the = height of root node

Binary tree: is a tree where any node has at most 2 children: so any node can has 0, 1, or 2 children
a strict/proper binary tree: is a tree which has 0 or 2 children
Perfect binary tree: all levels are completes with 2^level nodes

for complete binary tree you can use an array

max number of nodes at level i is 2^i
*/

#include <stdio.h>
#include <stdlib.h>
#include "binary.h"
#include <cs50.h>

//Global variables
node* head = NULL;
int min = 0;


//Protocole
node* InsertNode(node* temp, int value);
node* CreateNode(int value);
bool Search(node* ptr, int value);
int FindMin(node* ptr);


int main(void)
{
    head = InsertNode(head, 10);
    InsertNode(head, 40);
    InsertNode(head, 8);
    InsertNode(head, 50);
    InsertNode(head, 5);

    if (Search(head, 5) == true) printf("\nFounded\n");
    else printf("\nNot Founded\n");

    printf("The min in this binary search tree is:\t%i\n", FindMin(head));

}


//this function insert a node at the left if the value(data) is lesser or equal to the parent node
//or in the right if it is greater than the parent node
node* InsertNode(node* ptr, int value)
{
    if (ptr == NULL)
    {
        ptr = CreateNode(value);
        //return ptr;
    }
    else if (value <= ptr->data)
    {
        ptr->left = InsertNode(ptr->left, value);
        //return ptr;
    }
    else if (value > ptr->data)
    {
        ptr->right = InsertNode(ptr->right, value);
        //return ptr;
    }

    return ptr;

}


//this function create a new node each time is involked and return a pointer to the created node
node* CreateNode(int value)
{
    node* temp = (node*) malloc(sizeof(node));
    temp->left = temp->right = NULL;
    temp->data = value;
    return temp;
}


//this function look at the binary search tree if the element is there

bool Search(node* ptr, int value)
{
    if (ptr == NULL) return false;
    else if (ptr->data == value) return true;
    else if (value <= ptr->data)
    {
        printf("%i\t", ptr->data);
        return Search(ptr->left, value);
    }

    else
    {
        printf("%i\t", ptr->data);
        return Search(ptr->right, value);
    }


}


//This function will search the min and the max of a function
int FindMin(node* ptr)
{
    //if it is the last node at the left side of the tree then return its value
    if (ptr->left == NULL)    min = ptr->data;

    //if it is not the last left side of the tree then go further
    else
    {
        FindMin(ptr->left);
    }

    //return the min
    return min;
}