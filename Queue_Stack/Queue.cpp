#include "Structures.h"
#include <iostream>

using namespace std;

// Queue constructor
Queue::Queue() : front(nullptr), rear(nullptr) {}

// Insert a new element at the rear of the queue
void Queue::Insert(int data) {
    Node* newNode = new Node(data);
    if (rear != nullptr) {
        rear->next = newNode;
        newNode->prev = rear;
    }
    rear = newNode;
    if (front == nullptr) front = rear;
}

// Remove the front element from the queue
void Queue::Remove() {
    if (front == nullptr) return;

    Node* temp = front;
    front = front->next;
    if (front != nullptr) front->prev = nullptr;
    else rear = nullptr; // If the queue becomes empty
    delete temp;
}

// Print the contents of the queue
void Queue::Print() {
    Node* temp = front;
    cout << "\nQueue: " << endl;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next; // Move forwards
    }
    cout << endl;
}
