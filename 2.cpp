#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int main() {
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    // cout << node1 << endl;
    // cout << node2 << endl;
    // cout << node3 << endl;
    node1->next = node2;
    node2->next = node3;
    cout << node1->next->next->data;
    
    return 0;
}