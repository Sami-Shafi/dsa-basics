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
    Node* fourthNode = new Node(40);

    headNode->nextNode = secondNode;
    secondNode->nextNode = thirdNode;
    thirdNode->nextNode = fourthNode;

    // we need this for looping to keep the head pointer safe.
    Node* mover = headNode;
    while (mover != NULL) {
        cout << mover->val << endl;
        mover = mover->nextNode;
    }
    
    return 0;
}