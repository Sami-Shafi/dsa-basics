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
    Node* b = new Node (30);

    headNode->nextNode = a;
    a->nextNode = b;

    insert_at_pos(headNode, 2, 100);
    print_ll(headNode);
    
    return 0;
}