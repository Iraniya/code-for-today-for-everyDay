#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};

void printList(struct node *n)
{
    if(n == NULL)
        return;
    printList(n->next);
    printf("%d -> ",n->data);
    /*
    while (n!=NULL)
    {
        printf("%d-> ",n->data);
        n=n->next;
    }
    */

}

int main()
{
    struct node* head    = NULL;
    struct node* secound = NULL;
    struct node* third   = NULL;

    head     = (struct node*)malloc(sizeof(struct node));
    secound  = (struct node*)malloc(sizeof(struct node));
    third    = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = secound;

    secound->data = 2;
    secound->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
    return 0;
}

