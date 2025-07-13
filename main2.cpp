#include <bits/stdc++.h>
using namespace std;

class ListNode {

    public:
        int val;
        ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }

};

// void print_forward(Node* head) {
//     ListNode* tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
// }

int main ()
{
    ListNode* head = NULL;
    ListNode* tail = NULL;

    int val;
    while(true) {
        cin >> val;

        if(val == -1) break;

        ListNode* newNode = new ListNode(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    vector<ListNode*> output;
    ListNode* tmp = head;
    int count = 0;
    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    
    int ansNode = count/2 + 1;
    tmp = head;
    int i = 1;
    for(tmp, i; tmp != NULL; tmp = tmp->next, i++) {
        if(i >= ansNode){
            output.push_back(tmp);
        }
    }

    for(int i=0;i<output.size();i++) {
        cout << output[i]->val;
        if(output.size()-1>i) {
            cout << ",";
        }
    }
    
    return 0;
}
