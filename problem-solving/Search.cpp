#include<bits/stdc++.h>
using namespace std;

// You need to take a singly linked list of integer values as input. Afterward, you will be given an integer value X. Your task is to determine whether X is present in the linked list or not. If it is present, print its first index from the left side; otherwise, print -1. Assume that the linked list's index starts with 0.

// First line will contain T, the number of test cases.
// First line of each test case will contain the values of the singly linked list, and will terminate with -1.
// Second line of each test case will contain X.

class Node {

    public:
        int val;
        Node* nextNode;

    Node(int val) {
        this->val = val;
        this->nextNode = NULL;
    }
};

int find_x(Node* headNode, int x) {
    Node* tmp = headNode;
    int ct = 0;
    while (tmp != NULL)
    {
        if (tmp->val == x) {
            return ct;
        }
        tmp = tmp->nextNode;
        ct++;
    }
    return -1;
}

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node* headNode = NULL;
        Node* tailNode = NULL;

        int val;
        while(true) {
            cin >> val;

            if(val == -1) break;

            Node* newNode = new Node(val);
            if(headNode == NULL) {
                headNode = newNode;
                tailNode = newNode;
            }else {
                tailNode->nextNode = newNode;
                tailNode = newNode;
            }
        }

        int x;
        cin >> x;

        cout << find_x(headNode, x) << endl;
    }
    
    return 0;
}