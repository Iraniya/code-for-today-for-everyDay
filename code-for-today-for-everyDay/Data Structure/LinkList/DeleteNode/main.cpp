/*A complete working C program to delete a node in a linklist at a given position*/

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

//Create a linkList

struct node
{
    int data;
    struct node* next;
};


//getting a linklist
void pushNode(struct node **head_ref,int new_data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref) = new_node;
}

/*Given a reference (pointer to pointer) to the head of  a list and a position, deletes the node at the given position*/

void deleteNode(struct node **head_ref, int position)
{
    // If linked list is empty
    if(*head_ref == NULL)
        return;

    //store head node
    struct node *temp= *head_ref;

    //If head node to be removed
    if(position==0)
    {
        *head_ref=temp->next;        // change head
        free(temp);                 //free old head
        return;
    }

    //Find previous node of the node to deleted
    for(int i=0;temp!=NULL && i<position-1;i++)
    {
        temp=temp->next;
    }

    //If position is more than number of node
    if(temp ==NULL || temp->next==NULL)
        return;

    //Node temp->next is the node to be deleted
    //store pointer to the next of node to be deleted
    struct node *next =temp->next->next;

    //Unlink the node from linked list
    free(temp->next);
    temp->next =next;
}


//This function prints contents of the linklist starting from
// the given node
void printList(struct node *node)
{
    while(node!=NULL){
        printf("%d ",node->data);
        node=node->next;
    }
}
//main fuction start here
int main()
{
    //start with empty linklist
        struct node *head = NULL;

    pushNode(&head, 7);
    pushNode(&head, 1);
    pushNode(&head, 3);
    pushNode(&head, 2);
    pushNode(&head, 8);


    puts("Created LinkedList:");
    printList(head);
    deleteNode(&head,2);
    puts("\nLisklist afte deletion at position 4:");
    printList(head);
    return 0;
}

