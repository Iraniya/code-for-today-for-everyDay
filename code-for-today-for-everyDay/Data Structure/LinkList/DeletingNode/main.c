//A complet working C program to demonstrate deletion in singly
//Linked list

#include<stdlib.h>
#include <stdio.h>

//A Linked list
struct node
{
    int data ;
    struct node *next;
};

/* Given a reference (pointer to pointer) to the head of a linklist and an int, insert a new node on the front of the list.*/

void push(struct node **head_ref, int new_data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;

}

/*Deleting a reference (pointer to pointer ) to the head of a list
and a key, delete the first occurrence of key in linked list */
void deleteNode(struct node **head_ref,int key)
{
       // store the head node
    struct node *temp = *head_ref, *prev;

       //If head node itself holds the key to be delete
    if(temp!=NULL && temp->data==key)
    {
        *head_ref=temp->next;
        free(temp);
        return;
    }

    //Search for the key to be deleted, keep track of the
    //previous node as we need to change prev->next
    while(temp!=NULL && temp->data !=key)
    {
        prev = temp;
        temp = temp ->next;
    }
    //If key was not present in linked list
    if(temp == NULL)return;

    //Unlink the node from linked list
    prev->next = temp->next;
    free(temp); // Free memory
}

// function for printing the link list
void printList(struct node *node)
{
    while(node!=NULL)
    {
        printf("%d ",node->data);
        node= node->next;
    }
}


// main function start here

int main(void)
{
    /* Start with the empty list*/
    struct node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("Created LInkedlist: ");
    printList(head);
    deleteNode(&head,1);
    puts("\nLinked List after Deletion of 1:");
    printList(head);
    return 0;
}

