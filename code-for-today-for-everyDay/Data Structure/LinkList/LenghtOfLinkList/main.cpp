//Iterative and recursive C program to find lenght or count of nodes in a Link list

#include <stdio.h>
#include <iostream>
#include<stdlib.h>

using namespace std;

//Created linklist
struct node{
    int data;
    struct node *next;
};

//Given a reference (pointer to pointer ) to the head of a list and an int, push a new node on the front of the list

void insertNode(struct node **head_ref, int new_data)
{
    //allocate node
    struct node *new_node = (struct node*)malloc(sizeof(struct node));

    //put in the data
    new_node->data = new_data;

    //link the old list off the new node
    new_node->next= *head_ref;
    //move the head to point to the new node
    *head_ref= new_node;
}

//Print the linklist
void printNode(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d-> ",head->data);
        head=head->next;
    }
}

//Interative function to count the number of nodes
int iterative(struct node *head)
{
    int count=0;
    struct node *temp= head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

//Recursive function to count number of nodes
int recursive(struct node *head)
{

    if(head==NULL)
        return 0;
    else
        return (1 + recursive(head->next));
}


//main function start here
int main()
{
    struct node *head= NULL;
    insertNode(&head,1);
    insertNode(&head,2);
    insertNode(&head,3);
    insertNode(&head, 5);
    insertNode(&head,10);
    insertNode(&head, 11);
    insertNode(&head, 18);
    printNode(head);

    printf("\nCount of nodes is %d ", iterative(head));
    printf("\nCount of nodes is %d ", recursive(head));
    return 0;
}

