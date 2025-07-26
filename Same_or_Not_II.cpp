// There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

// Note: You cannot use any  here. You need to implement the stack and queue by yourself. You can use linked list or array as you want.

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

class manualStack {
public:
    Node* topNode = NULL;

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->nextNode = topNode;
        topNode = newNode;
    }

    void pop() {
        if (topNode != NULL) {
            Node* del = topNode;
            topNode = topNode->nextNode;
            delete del;
        }
    }

    int top() {
        if (topNode != NULL) return topNode->val;
        return -1;
    }

    bool empty() {
        return topNode == NULL;
    }
};

class ManualQueue {

public:
    Node* head = NULL;
    Node* tail = NULL;

    void push(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            head = tail = newNode;
        } else {
            tail->nextNode = newNode;
            tail = newNode;
        }
    }

    void pop() {
        if (head != NULL) {
            Node* del = head;
            head = head->nextNode;
            if (head == NULL) tail = NULL;
            delete del;
        }
    }

    int front() {
        if (head != NULL) return head->val;
        return -1; // or throw error
    }

    bool empty() {
        return head == NULL;
    }
};

void outputPrint(bool isSame) {
    if(isSame) {
        cout << "YES";
    }else {
        cout << "NO";
    }
}

void detOrder(manualStack st, ManualQueue q, bool &isSame) {

    while(!st.empty()) {
        int val1 = st.top();
        int val2 = q.front();
        if (val1 != val2) {
            isSame = false;
            return;
        }
        st.pop();
        q.pop();
    }
    isSame = true;
}

int main ()
{
    bool isSame = false;
    int n, m;
    cin >> n >> m;

    manualStack st;
    ManualQueue q;

    if(n!=m || n == 0) {
        outputPrint(isSame);
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    detOrder(st, q, isSame);
    outputPrint(isSame);
    
    return 0;
}