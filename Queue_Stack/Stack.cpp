#include "Structures.h" 
#include <iostream>

using namespace std;

// Node constructor
Node::Node(int data) : data(data), next(nullptr), prev(nullptr) {}

// Stack constructor
Stack::Stack() : top(nullptr) {}

// Insert a new element on top of the stack
void Stack::Insert(int data) {
    Node* newNode = new Node(data);
    if (top != nullptr) {
        top->next = newNode;
        newNode->prev = top;
    }
    top = newNode;
}

// Remove the top element from the stack
void Stack::Remove() {
    if (top == nullptr) return;

    Node* temp = top;
    top = top->prev;
    if (top != nullptr) top->next = nullptr;
    delete temp;
}

// Print the contents of the stack
void Stack::Print() {
    Node* temp = top;
    cout << "\nStack: " << endl;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev; // Move backwards
    }
    cout << endl;
}
