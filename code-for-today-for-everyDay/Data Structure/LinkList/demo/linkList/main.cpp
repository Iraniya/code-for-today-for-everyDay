#include <iostream>
#include <stdio.h>
using namespace std;

class Node{
    Node next = NULL;
    int data;

    public Node(int d){
        data =d;
    }

    void appendToTail(int d){
    Node end = new Node(d);
    Node n = this;
    while(n.next !=NULL){
        n=n.next;
    }
    n.next = end;
    }

}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

