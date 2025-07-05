#include<bits/stdc++.h>
using namespace std;

// You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

class Node {

    public:
        int val;
        Node* nextNode;

    Node(int val) {
        this->val = val;
        this->nextNode = NULL;
    }
};

bool match(Node* headNode1, Node* headNode2) {
    Node* tmp1 = headNode1;
    Node* tmp2 = headNode2;
    for (tmp1, tmp2; tmp1 != NULL; tmp1=tmp1->nextNode, tmp2=tmp2->nextNode)
    {
        if(tmp1->val != tmp2->val) {
            return false;
        }
    }
    return true;
    
}

int main ()
{
    Node* headNode1 = NULL;
    Node* tailNode1 = NULL;
    Node* headNode2 = NULL;
    Node* tailNode2 = NULL;

    int val, ct1 = 0, ct2 = 0;

    while(true) {
        cin >> val;

        if(val == -1) break;
        ct1++;

        Node* newNode = new Node(val);
        if(headNode1 == NULL) {
            headNode1 = newNode;
            tailNode1 = newNode;
        }else {
            tailNode1->nextNode = newNode;
            tailNode1 = newNode;
        }
    }
    while(true) {
        cin >> val;
        
        if(val == -1) break;
        ct2++;

        Node* newNode = new Node(val);
        if(headNode2 == NULL) {
            headNode2 = newNode;
            tailNode2 = newNode;
        }else {
            tailNode2->nextNode = newNode;
            tailNode2 = newNode;
        }
    }

    if (ct1 != ct2) {
        cout << "NO";
    }else {
        if (match(headNode1, headNode2)) {
            cout << "YES";
        }else {
            cout << "NO";
        }
    }
    
    return 0;
}