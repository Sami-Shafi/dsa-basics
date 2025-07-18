#include <bits/stdc++.h>
using namespace std;

// You need to take a doubly linked list of integer value as input. You need to tell if the doubly linked list forms a palindrome or not.

// Note: You need to solve this using Doubly Linked List, otherwise you will not get marks.

// Input Format
// Input will contain the values of the doubly linked list, and will terminate with -1.

// Constraints
// 1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
// 0 <= V <= 1000; Here V is the value of each node.

// Output Format
// Output "YES" if it forms a palindrom otherwise output "NO".

class Node {

    public:
        int val;
        Node* nextNode;
        Node* prevNode;

    Node(int val) {
        this->val = val;
        this->nextNode = NULL;
        this->prevNode = NULL;
    }

};

void checkPalindrom(Node* head, Node* tail) {
    Node* i = head;
    Node* j = tail;
    bool isPalindrom = true;
    
    for (i, j; i != j && j->nextNode != i; i=i->nextNode, j=j->prevNode)
    {
        if(i->val != j->val) {
            isPalindrom = false;
        }
    }

    if(isPalindrom) {
        cout << "YES";
    }else {
        cout << "NO";
    }
}

int main ()
{

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(cin >> val) {
        if(val==-1) {
            break;
        }

        Node* newNode = new Node(val);
        if(head==NULL) {
            head = newNode;
            tail = newNode;
        }else {
            tail->nextNode = newNode;
            newNode->prevNode = tail;
            tail = newNode;
        }
    }

    checkPalindrom(head, tail);
    
    return 0;
}
