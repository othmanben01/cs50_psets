/*This program checks if the parentheses are balanced in a string or not
This program uses the stack array implementation for solving the problem*/
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

//Prototypes
char* Get_String(void);
void Pop(void);
void Push(char* stack, char character);
bool IsEmpty(void);

//Global variables
int TOP = -1;


int main(void)
{

    //get a string from the user
    char* s = Get_String();
    //create a stack
    char* stack = (char*) malloc(sizeof(char) * 20);

    //iterate over the string
    for (int i = 0, size = strlen(s); i < size; i++)
    {
        //push onto the stack the char if is: {, (, [
        if ((s[i] == '{') || (s[i] == '(') || (s[i] == '['))
        {
            Push(stack, s[i]);
        }

        //pop off from the stack the TOP char
        else if ((s[i] == '}') || (s[i] == ')') || (s[i] == ']'))
        {
            if (((s[i] == '}') && (stack[TOP] == '{')) || ((s[i] == ')') && (stack[TOP] == '(')) || ((s[i] == ']') && (stack[TOP] == '[')))
            {
                Pop();
            }
            else
            {
                printf("The parentheses are NOT BALANCED!\n");
                return -1;
            }
        }

    }

    if (IsEmpty())
    {
        printf("All is GOOD!\n");
        return 0;
    }
    else
    {
        printf("The stack is not EMPTY!!\n");
        return -1;
    }

}


//check if the stack is empty
bool IsEmpty(void)
{
    if (TOP == -1)   return true;
    else return false;
}

//push the opened parenthese to the stack
void Push(char* stack, char character)
{
    stack[++TOP] = character;
}

//pop off the TOP parenthese from the stack
//Pop off the last value from the stack
void Pop(void)
{
    TOP--;
}


//this function ask the user for a string and return its pointer
char* Get_String(void)
{
    char *s = (char*) malloc(50);
    printf("Please, give us a string: \n");
    scanf("%s", s);

    return s;
}