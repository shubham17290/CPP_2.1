#include <iostream>
#include <queue>
using namespace std;

// ---------- Helper functions for queue operations ----------

// Insert (push) a single element into the queue
void pushElement(queue<int>& q, int value) {
    q.push(value);
    cout << "Pushed: " << value << endl;
}

// Remove (pop) the front element from the queue
void popElement(queue<int>& q) {
    if (q.empty()) {
        cout << "Queue is empty, cannot pop." << endl;
        return;
    }
    cout << "Popped: " << q.front() << endl;
    q.pop();
}

// Display the front element
void frontElement(queue<int>& q) {
    if (q.empty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Front element: " << q.front() << endl;
}

// Display the rear (back) element
void backElement(queue<int>& q) {
    if (q.empty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Rear element: " << q.back() << endl;
}

// Display the size of the queue
void showSize(queue<int>& q) {
    cout << "Size of queue: " << q.size() << endl;
}

// Check whether the queue is empty
void checkEmpty(queue<int>& q) {
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;
}

// Print all elements of the queue (front -> rear) without destroying it
void displayQueue(queue<int> q) {
    if (q.empty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue (front -> rear): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

// Clear all elements from the queue
void clearQueue(queue<int>& q) {
    while (!q.empty()) {
        q.pop();
    }
    cout << "Queue cleared." << endl;
}

// ---------- Main ----------

int main() {
    // creating a queue
    queue<int> q;

    // insertion
    pushElement(q, 10); // 10
    pushElement(q, 20); // 10, 20
    pushElement(q, 30); // 10, 20, 30
    pushElement(q, 40); // 10, 20, 30, 40

    cout << endl;

    // inspection
    showSize(q);
    displayQueue(q);
    frontElement(q);
    backElement(q);
    checkEmpty(q);

    cout << endl;

    // deletion
    popElement(q); // removes 10
    popElement(q); // removes 20

    cout << endl;

    displayQueue(q);
    showSize(q);

    cout << endl;

    // clearing the queue
    clearQueue(q);
    checkEmpty(q);

    return 0;
}