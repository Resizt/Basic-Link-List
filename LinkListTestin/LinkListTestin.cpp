// Basic Link List Program, printing the value of what was put into the Node

#include <iostream>
#include "stdc++.h"

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

// Function to print in order
void printlist(Node* n) {
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    // Making new nodes
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    // Assigning the nodes with data
    head -> data = 10;
    head -> next = second;

    second->data = 9;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 7;
    fourth-> next = NULL;

    // Print the list "In order"
    printlist(head);
    return 0;
}