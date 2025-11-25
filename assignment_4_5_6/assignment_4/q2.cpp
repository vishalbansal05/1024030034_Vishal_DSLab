#include <iostream>
using namespace std;

#define MAX 5
int cq[MAX], front = -1, rear = -1;

bool isFull() {
    return (front == 0 && rear == MAX - 1) || (front == rear + 1);
}

bool isEmpty() {
    return front == -1;
}

void enqueue(int val) {
    if (isFull()) {
        cout << "Circular Queue Overflow\n";
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % MAX;
    cq[rear] = val;
    cout << val << " enqueued\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Circular Queue Underflow\n";
        return;
    }
    cout << cq[front] << " dequeued\n";
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}

void peek() {
    if (isEmpty()) {
        cout << "Circular Queue is empty\n";
        return;
    }
    cout << "Front element: " << cq[front] << "\n";
}

void display() {
    if (isEmpty()) {
        cout << "Circular Queue is empty\n";
        return;
    }
    cout << "Circular Queue: ";
    int i = front;
    while (true) {
        cout << cq[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    cout << "\n";
}

int main() {
    int choice, val;
    while (true) {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Peek\n4.isEmpty\n5.isFull\n6.Display\n7.Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; enqueue(val); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: cout << (isEmpty() ? "Empty\n" : "Not Empty\n"); break;
            case 5: cout << (isFull() ? "Full\n" : "Not Full\n"); break;
            case 6: display(); break;
            case 7: return 0;
            default: cout << "Invalid choice\n";
        }
    }
}
