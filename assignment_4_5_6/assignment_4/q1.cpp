#include <iostream>
using namespace std;

#define MAX 5
int queue[MAX], front = -1, rear = -1;

bool isFull() {
    return rear == MAX - 1;
}

bool isEmpty() {
    return front == -1 || front > rear;
}

void enqueue(int val) {
    if (isFull()) {
        cout << "Queue Overflow\n";
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = val;
    cout << val << " enqueued\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow\n";
        return;
    }
    cout << queue[front++] << " dequeued\n";
}

void peek() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Front element: " << queue[front] << "\n";
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue: ";
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
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
