#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
        int val;
        Node* left;
        Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* input_trees() {
    int val;
    cin >> val;
    Node* root = NULL;
    if(val!=-1)
        root = new Node(val);

    queue<Node*> q;
    if(root)
        q.push(root);

    while(!q.empty()) {
        Node* front = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node *ln = NULL, *rn = NULL;
        if (l != -1)
            ln = new Node(l);
        
        if (r != -1)
            rn = new Node(r);

        front->left = ln;
        front->right = rn;

        if(ln)
            q.push(ln);
        if(rn)
            q.push(rn);
    }

    return root;
    
}

void level_order(Node* root) {
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* front = q.front();
        q.pop();

        cout << front->val << " ";

        if(front->left)
            q.push(front->left);
        
        if(front->right)
            q.push(front->right);
    }
    
}

Node* convert_to_BST(int a[], int n, int start, int end) {
    if(start > end)
        return NULL;
    
    int midI = (start+end)/2;
    int midVal = a[midI];
    Node* root = new Node(midVal);
    Node* leftN = convert_to_BST(a, n, start, midI-1);
    Node* rightN = convert_to_BST(a, n, midI+1, end);

    root->left = leftN;
    root->right = rightN;
    return root;
}

int main ()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Node* root = convert_to_BST(a, n, 0, n-1);
    level_order(root);
    
    return 0;
}