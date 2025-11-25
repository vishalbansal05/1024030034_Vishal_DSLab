#include <iostream>   //Using 2 queue
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2;
public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
    void pop() {
        if (q1.empty()) { cout << "Stack empty\n"; return; }
        q1.pop();
    }
    int top() {
        if (q1.empty()) { cout << "Stack empty\n"; return -1; }
        return q1.front();
    }
    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top: " << s.top() << "\n";
    s.pop();
    cout << "Top after pop: " << s.top() << "\n";
}




#include <iostream>  //using 1 queue
#include <queue>
using namespace std;

class Stack {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        int size = q.size();
        for (int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    void pop() {
        if (q.empty()) { cout << "Stack empty\n"; return; }
        q.pop();
    }
    int top() {
        if (q.empty()) { cout << "Stack empty\n"; return -1; }
        return q.front();
    }
    bool empty() {
        return q.empty();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top: " << s.top() << "\n";
    s.pop();
    cout << "Top after pop: " << s.top() << "\n";
}

