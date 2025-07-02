#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
        int val;
        Node* nextNode;

    Node(int val) {
        this->val = val;
        this->nextNode = NULL;
    }

};


void insert_at_pos(Node* headNode, int index, int val)
{
    Node* newNode = new Node(val);

    Node* tmp = headNode;
    for (int i = 0; i < index-1; i++) {
        tmp = tmp->nextNode;
    }
    newNode->nextNode = tmp->nextNode;
    tmp->nextNode = newNode;

}

void insert_at_tail(Node* &headNode, Node* &tailNode, int val)
{
    Node* newNode = new Node(val);

    if (headNode == NULL) {
        headNode = newNode;
        tailNode = newNode;
        return;
    }

    tailNode->nextNode = newNode;
    tailNode = tailNode->nextNode;

}

void print_ll(Node* headNode)
{
    Node* tmp = headNode;
    while (tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->nextNode;
    }
}

int main ()
{
    Node* headNode = new Node (10);
    Node* a = new Node (20);
    Node* tailNode = new Node (30);

    headNode->nextNode = a;
    a->nextNode = tailNode;

    insert_at_tail(headNode, tailNode, 100);
    insert_at_tail(headNode, tailNode, 200);
    insert_at_tail(headNode, tailNode, 300);
    insert_at_tail(headNode, tailNode, 250);
    print_ll(headNode);
    cout << "Tail: " << tailNode->val;
    
    return 0;
}