#include "Structures.h"
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
int total = 100;

int main() {
    //srand(static_cast<unsigned int>(time(nullptr)));

    Stack stack;
    Queue queue;

    // Insertion into Stack and Queue
    auto startStackInsert = chrono::high_resolution_clock::now();
    for (int i = 0; i < total; ++i) {
        stack.Insert(rand() % 1000);
    }
    auto endStackInsert = chrono::high_resolution_clock::now();
    stack.Print();

    auto startQueueInsert = chrono::high_resolution_clock::now();
    for (int i = 0; i < total; ++i) {
        queue.Insert(rand() % 1000);
    }
    auto endQueueInsert = chrono::high_resolution_clock::now();
    queue.Print();

    // Removal from Stack and Queue
    auto startStackRemove = chrono::high_resolution_clock::now();
    for (int i = 0; i < total; ++i) {
        stack.Remove();
    }
    auto endStackRemove = chrono::high_resolution_clock::now();
    stack.Print();

    auto startQueueRemove = chrono::high_resolution_clock::now();
    for (int i = 0; i < total; ++i) {
        queue.Remove();
    }
    auto endQueueRemove = chrono::high_resolution_clock::now();
    queue.Print();

    // Calculate durations
    double durationStackInsert = chrono::duration<double, milli>(endStackInsert - startStackInsert).count();
    double durationQueueInsert = chrono::duration<double, milli>(endQueueInsert - startQueueInsert).count();
    double durationStackRemove = chrono::duration<double, milli>(endStackRemove - startStackRemove).count();
    double durationQueueRemove = chrono::duration<double, milli>(endQueueRemove - startQueueRemove).count();

    // Print results
    cout << fixed << setprecision(3);
    cout << "\nData Structure | Time Taken (milliseconds) To Add " << total << " | Time Taken (milliseconds) To Remove " << total << endl;
    cout << "---------------|--------------------------------------|--------------------------------------" << endl;
    cout << "Stack          | " << durationStackInsert << "                                | " << durationStackRemove << endl;
    cout << "Queue          | " << durationQueueInsert << "                                | " << durationQueueRemove << endl;

    return 0;
}
