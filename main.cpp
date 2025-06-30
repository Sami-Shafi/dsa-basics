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

void insert_at_head(Node* headNode, int val)
{
    Node* newNode = new Node(val);
    newNode->nextNode = headNode;
}

int main ()
{
    Node* headNode = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    insert_at_head(headNode, 100);
    
    return 0;
}