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

int main ()
{
    // recap of dynamic: when you create anything wiht new keyword, it stores it into the heap memory and you have to assign it to a pointer var of same type. To access it, you can de-ref the pointer var.
    Node* headNode = new Node(10);
    Node* secondNode = new Node(20);
    Node* thirdNode = new Node(30);

    headNode->nextNode = secondNode;
    secondNode->nextNode = thirdNode;

    cout << headNode->val << " " << headNode->nextNode->val << " ";
    
    return 0;
}