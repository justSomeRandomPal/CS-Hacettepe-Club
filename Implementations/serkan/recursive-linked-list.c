#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void addRecursive(node **head, int data);
void deleteRecursive(node **head, int data);


int main()
{

    node *head = NULL;

    addRecursive(&head, 3);
    addRecursive(&head, 5);
    addRecursive(&head, 7);
    addRecursive(&head, 9);
    addRecursive(&head, 11);
    addRecursive(&head, 13);


    deleteRecursive(&head, 7);
    deleteRecursive(&head, 5);
    deleteRecursive(&head, 13);


    return 0;
}

void addRecursive(node **head, int data)
{
    node * current = *head;


    if (current == NULL)
    {
        current = (node *) calloc(1, sizeof(node));

        current->next = NULL;
        current->data = data;
        *head = current;
    }
    else if (current->next == NULL)
    {
        current->next = (node *) calloc(1, sizeof(node));
        current->next->data = data;
        current->next->next = NULL;
    }
    else
    {
        current = current->next;

        addRecursive(&current, data);

    }


}

void deleteRecursive(node **head, int data)
{

    if (*head == NULL)
    {
        return;
    }
    else if ((*head)->data == data)
    {
        node * current = *head;

        node * tmp = current;

        current = current->next;

        free(tmp);

        *head = current;
        return;
    }
    else
    {

        deleteRecursive(&(*head)->next, data);
    }
}

