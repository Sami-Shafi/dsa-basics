#include <bits/stdc++.h>
using namespace std;

// You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// You need to insert the value V at index X. Assume that index starts from 0.
// After that for each query you need to print the linked list from left to right and right to left.
// If the index is invalid, then print "Invalid".

// Note: You must use Doubly Linked List, otherwise you will not get marks.

// Input Format
// First line will contain Q.
// Next Q lines will contain X and V.

// Constraints
// 1 <= Q <= 1000;
// 0 <= X <= 1000;
// 0 <= V <= 1000

// Output Format
// For each query print the linked list from left to right and right to left or print "Invalid" as asked.
// Print "L -> " before printing the linked list from left to right.
// Print "R -> " before printing the linked list from right to left.

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

void buildLink(Node* prevIndexNode, Node* newNode, Node* &tail) {
    if(prevIndexNode->nextNode!=NULL) {
        newNode->nextNode = prevIndexNode->nextNode;
        newNode->prevNode = prevIndexNode;
        newNode->nextNode->prevNode = newNode;
        prevIndexNode->nextNode = newNode;
    }else {
        prevIndexNode->nextNode = newNode;
        newNode->prevNode = prevIndexNode;
        tail=newNode;
    }
}

void zigzagPrint(Node* head, Node* tail) {

    Node* tmp = head;
    cout << "L -> ";
    for (tmp; tmp != NULL; tmp=tmp->nextNode)
    {
        cout << tmp->val << " ";
    }
    cout << endl;
    
    Node* tmp2 = tail;
    cout << "R -> ";
    for (tmp2; tmp2 != NULL; tmp2=tmp2->prevNode)
    {
        cout << tmp2->val << " ";
    }
    cout << endl;
    
}

int main ()
{

    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        Node* newNode = new Node(val);

        if(idx == 0) {
            if(head == NULL) {
                head = newNode;
                tail = newNode;
            }else {
                head->prevNode = newNode;
                newNode->nextNode = head;
                head = newNode;
            }
            zigzagPrint(head, tail);
            continue;
        }else {
            if(head == NULL) {
                cout << "Invalid" << endl;
                continue;
            }

            if(idx == 1) {
                buildLink(head, newNode, tail);
                zigzagPrint(head, tail);
                continue;
            }

            int step = 0;
            Node* tmp = head;
            bool isInvalid = false;
            while (step < idx-1)
            {
                if(tmp->nextNode == NULL) {
                    cout << "Invalid" << endl;
                    isInvalid = true;
                    break;
                }

                tmp = tmp->nextNode;
                step++;
            }

            if(isInvalid && tmp->nextNode == NULL) {
                continue;
            }
            buildLink(tmp, newNode, tail);
            zigzagPrint(head, tail);
        }
        
    }

    return 0;
}
