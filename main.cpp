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

void delete_head(Node* &headNode)
{
    Node* deleteNode = headNode;
    headNode = headNode->nextNode;
    delete deleteNode;
}

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

void delete_pos(Node* headNode, int index)
{
    Node* tmp = headNode;
    for (int i = 0; i < index-1; i++) {
        tmp = tmp->nextNode;
    }

    Node* deleteNode = tmp->nextNode;
    tmp->nextNode = deleteNode->nextNode;

    delete deleteNode;
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

void print_ll_rev(Node* tmp)
{
    if (tmp == NULL) {
        return;
    }

    print_ll_rev(tmp->nextNode);
    cout << tmp->val << endl;
}

int main ()
{
    Node* headNode = NULL;
    Node* tailNode = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(headNode, tailNode, val);
    }
    print_ll_rev(headNode);
    
    return 0;
}