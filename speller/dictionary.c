// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;
const unsigned int countWord = 0;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    int hashNum = hash(word);
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Open dictionary file
    FILE *Dictfile = fopen(dictionary, "r");
    // Check if return value is NULL
    if (Dictfile == NULL)
    {
        return false;
    }
    // Read strings one at a time from file
    char str[LENGTH + 1];
    while (fscanf(Dictfile, "%s", str) != EOF)
    {
        // Create new node for each word using malloc
        node *temp = malloc(sizeof(node));
        if (temp == NULL)
        {
            return false:
        }
        // Copy word into node using strcpy
        strcpy (temp -> word, str);
        // Hash function
        int hashNum = hash(str);
        //Check if pointing to NULL
        if (table[hashNum] == NULL)
        {
            // Point temp to NULL
            temp -> next == NULL;
        }
        else
        {
            // Point temp to first node of linked list
            temp -> next = table[hashNum]:
        }
        // Point header to temp
        table[hashNum] = temp;
        countWord += 1;

    }
    // Close file
    fclose(DictFile);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return countWord;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
