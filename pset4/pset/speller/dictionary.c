// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "dictionary.h"


// Represents number of buckets in a hash table
#define N 26
int number = -1;

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

//protoytpes
node *insert(node *hashtable[N], char *word);
node *createNode(char *word);

// Represents a hash table
node *hashtable[N];

//global variable which count the number of words in a dictionary
int wordCount = 0;
// Hashes word to a number between 0 and 25, inclusive, based on its first letter
unsigned int hash(const char *word)
{
    return (tolower(word[0]) - 'a') % 26;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // Initialize hash table
    for (int i = 0; i < N; i++)
    {
        hashtable[i] = NULL;
    }

    // Open dictionary
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        unload();
        return false;
    }

    // Buffer for a word
    char word[LENGTH + 1];
    for (int i = 0; i <= LENGTH; i++)
    {
        word[i] = '\0';
    }

    // Insert words into hash table
    while (fscanf(file, "%s", word) != EOF)
    {
        // TODO
        //inserting the word into the hash table
        node *temp = insert(hashtable, word);
        if (temp == NULL)
        {
            return false;
        }
        wordCount++;
    }

    // Close dictionary
    fclose(file);

    // Indicate success
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return wordCount;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    int length = strlen(word);
    char *tolowerword = (char *) malloc(sizeof(char) * strlen(word) + 1);
    tolowerword[length] = '\0';

    for (int i = 0; i < length; i++)
    {
        tolowerword[i] = tolower(word[i]);
    }

    //hash the new word
    int position = hash(tolowerword);
    //search through the hashtable if the word exist
    node *temp = hashtable[position];

    while (temp != NULL)
    {
        if (strcmp(tolowerword, temp->word) == 0)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    int i = 0;
    while (i < N)
    {
        node *cursor = hashtable[i];
        while (cursor != NULL)
        {
            node *temp = cursor;
            cursor = cursor->next;
            free(temp);
        }
        i++;
    }

    return true;
}

//creating a node
node *createNode(char *word)
{
    node *temp = (node *) malloc(sizeof(node) * 1);
    if (temp == NULL)
    {
        return NULL;
    }
    //fill in the node with its value
    strcpy(temp->word, word);
    return temp;
}


//inserting a word into a hash table
node *insert(node *table[N], char *word)
{
    node *temp = createNode(word);
    if (temp == NULL)
    {
        return NULL;
    }

    int r = hash(word);
    if (table[r] == NULL)
    {
        table[r] = temp;
    }

    else
    {
        node *temp2 = table[r];
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
        temp2 = temp = NULL;
    }

    return temp;

}
