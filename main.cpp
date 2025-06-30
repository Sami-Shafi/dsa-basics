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

void insert_at_head(Node* &headNode, int val)
{
    Node* newNode = new Node(val);
    newNode->nextNode = headNode;
    headNode = newNode;
}

void insert_at_tail(Node* &headNode, int val)
{
    Node* newNode = new Node(val);

    if (headNode == NULL) {
        headNode = newNode;
        return;
    }

    Node* tmp = headNode;
    while (tmp->nextNode != NULL) {
        tmp = tmp->nextNode;
    }
    tmp->nextNode = newNode;
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
    Node* headNode = NULL;

    insert_at_tail(headNode, 20);
    insert_at_tail(headNode, 30);
    insert_at_head(headNode, 100);
    insert_at_tail(headNode, 50);
    insert_at_tail(headNode, 70);
    print_ll(headNode);
    
    return 0;
}