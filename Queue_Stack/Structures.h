#pragma once
// Structures.h


// Node structure for a doubly-linked list
class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data);
};

// Stack implementation using a doubly-linked list
class Stack {
private:
    Node* top; // Pointer to the top of the stack
public:
    Stack();
    void Insert(int data);
    void Remove();
    void Print();
};

// Queue implementation using a doubly-linked list
class Queue {
private:
    Node* front; // Pointer to the front of the queue
    Node* rear; // Pointer to the rear of the queue
public:
    Queue();
    void Insert(int data);
    void Remove();
    void Print();
};
