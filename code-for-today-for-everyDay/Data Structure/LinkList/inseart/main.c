//C function to demonstrate all insertion methods
// on linklist

#include <stdlib.h>
#include <stdio.h>


// liskes list node

struct node{
    int data;
    struct node *next;
};

/* Given a refrence (pointer to pointer) to the head of a list and
   an int, inserts a new node on the front of the list. */

void push(struct node** head_ref, int new_data){

    //allocate node
    struct node *new_node =(struct node*)malloc(sizeof(struct node));

   //put in the data
    new_node->data=new_data;

    //Make next of new node as head
    new_node->next=(*head_ref);

    //move the head to point to the new node
    (*head_ref)=new_node;
}


/* Given a node prev_node, insert a new node after the given prev_node */

void insertAfter(struct node* prev_node, int new_data){

    //allocate the new node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    //Put data in the new_node
    new_node->data=new_data;

    //make next of the new node as the next to prev_node
    new_node->next=prev_node->next;

    // Move the head of the new_node to the prev_node
    prev_node->next = new_node;

}

/* Given a reference(pointer to pointer) to the head
 * of the list and a int, append a new node at the end */

void append(struct node** head_ref, int new_data ){
    //allocate new node
    struct node* new_node=(struct node*)malloc(sizeof(struct node));

    struct node* last = *head_ref;
    //put data in the new node
    new_node->data=new_data;

    //this new node is  going to be the last node, so mak next of it
    //as NULL
    new_node->next=NULL;


    //If the Linked list is empty, the make the new node as head
    if(*head_ref ==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL)
        last=last->next;

    last->next=new_node;

    //or can traverse to to the last

//    while(head_ref!=NULL){
//       head_ref=head_ref->next;
//    }
//    head_ref->next=new_node;

}

void printList(struct node *node){
    while(node!=NULL){
        printf("%d ",node->data);
        node=node->next;
    }
}


int main(void)
{
    /*Start with the empty list */
    struct node* head = NULL;

    //Insert 6
    append(&head,6);

    //Insert 7 at the beginning. So linked list become 7->6->NULL
    push(&head,7);

    push(&head,1);

    append(&head, 4);

    insertAfter(head->next,8);

    printf("Created Linked list is :");
    printList(head);
    return 0;
}

