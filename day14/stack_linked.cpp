#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int val) {

        Node* newNode = new Node(val);

        newNode->next = top;
        top = newNode;

        cout << val << " pushed into stack" << endl;
    }

    void pop() {

        if(top == NULL) {
            cout << "Stack Underflow" << endl;
            return;
        }

        Node* temp = top;

        cout << top->data << " popped from stack" << endl;

        top = top->next;

        delete temp;
    }

    void peek() {

        if(top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Top element: " << top->data << endl;
    }

    void display() {

        if(top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = top;

        cout << "Stack elements: ";

        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();

    return 0;
}