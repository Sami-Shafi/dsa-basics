#include<bits/stdc++.h>
using namespace std;

// You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

class Node {

    public:
        int val;
        Node* nextNode;

    Node(int val) {
        this->val = val;
        this->nextNode = NULL;
    }

};

// void sort_linked_list (Node* headNode) {
//     for (Node* i = headNode; i->nextNode != NULL; i=i->nextNode)
//     {
//         for (Node* j = i->nextNode; j != NULL; j=j->nextNode)
//         {
//             if (i->val > j->val){
//                 swap(i->val, j->val);
//             }
//         }
        
//     }
    
// }

// void print_linked_list(Node* headNode) {
//     Node* tmp = headNode;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->nextNode;
//     }
    
// }

int find_gap(Node* headNode) {
    Node* tmp = headNode;
    int max = tmp->val;
    int min = tmp->val;
    while (tmp != NULL)
    {
        if (tmp->val > max) {
            max = tmp->val;
        }else if (tmp->val < min) {
            min = tmp->val;
        }
        tmp = tmp->nextNode;
    }
    return max-min;
}

int main ()
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

    cout << find_gap(headNode);
    
    return 0;
}