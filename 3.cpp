#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
    }
};

class Stack {
    public:
    Node *top;
    int sz;

    Stack() {
        top = NULL;
        sz = 0;
    }

    void push(int data) {
        Node *newN = new Node(data);
        newN->next = top;
        top = newN;
        sz++;
    }

    void pop() {
        if (top != NULL) {
            top = top->next;
            sz--;
        }
    }

    int size() {
       return sz; 
    }

    bool empty() {
        if (sz == 0)
            return true;
        return false;
//        return (sz == 0);
    }

    Node *topElement() {
        return top;
    }
};

int main() {
    Stack *st = new Stack();
    st->push(10);
    st->push(20);
    st->push(5);
    st->push(12);
    st->pop();
    st->pop(); // 10 20
    cout << st->top->next->data << endl;
    cout << st->size() << endl;
    cout << st->empty();

    return 0;
}