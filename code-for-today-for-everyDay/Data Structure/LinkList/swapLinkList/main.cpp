/*  Given a linked list and two keys in it, swap nodes for two given keys.
Nodes should be swaped by changing links. Swapping data of nodes may be expensive in many situtation when data
contains many fields.
I strongly recommend to minimize your browser and try this yourself first.

Example
 Input:  1->2->3->4->5->6,  x = 4, y = 3
 Output: 1->2->4->3->5->6
*/

//This program swaps the nodes of linked list rather than swapping the field from the nodes.

#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

//Create a linklist
struct node{
    int data;
    struct node *next;
};

//Fuction to swap nodes x and y in linked list by changing links

void swapNodes(struct node **head_ref, int x, int y)
{
    //Nothing to do if a and y are same
    if(x==y)
     {
        printf("\nBoth key are same\n");
        return ;
     }

    //search for x (keep track of prevX and CurrX
    struct node *prevX = NULL, *currX = *head_ref;
    while(currX && currX->data!=x)
    {
        prevX = currX;
        currX = currX->next;
    }

    //search foy y(keep track of prevY and currY

    struct node *prevY =NULL, *currY = *head_ref;
    while(currY && currY->data!=y){
        prevY=currY;
        currY=currY->next;
    }

    //If either x or y is not present, nothing to do
    if(currX==NULL || currY==NULL) {
        printf("\nThe key not present in the link list\n");
        return;
    }
    //If x is not head of linklist
    if(prevX !=NULL)
        prevX->next=currY;
    else  //make y as new head
        *head_ref= currY;

     //If Y is not head of link list

      if(prevY!=NULL)
          prevY->next=currX;
      else  //make x as new head
          *head_ref =currX;

      // swap next pointers
      struct node *temp = currY->next;
      printf("\ntemp data is :%d  and temp next data is: %d and current is :%d next to orignal is:%d \n",temp->data,temp->next->data,currY->data,currY->next->data);
      currY->next =currX->next;
      currX->next = temp;
      free(temp);

}



//function to get linklist
void pushnode(struct node **head_ref, int new_data){

    //allocating memory
    struct node *new_node=(struct node*)malloc(sizeof(struct node));

    //assign data to the new node
    new_node->data=new_data;

    //give refrence of next node to the new node
    new_node->next=(*head_ref);

    //make new node head
    (*head_ref)=new_node;
}

//function to print linklist
void printlist(struct node *head_ref){
    //create a temp node pointing to head
    struct node *temp= head_ref;

    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}


//main function start here

int main()
{
    //create a empty node
    struct node *head =NULL;

    //push some data in the linklist
    pushnode(&head, 1);
    pushnode(&head,2);
    pushnode(&head, 3);
    pushnode(&head, 4);
    pushnode(&head, 5);

    //print the linklist
    printf("Your input link list is : ");
    printlist(head);

    swapNodes(&head,1,2);
    printlist(head);
    return 0;
}

