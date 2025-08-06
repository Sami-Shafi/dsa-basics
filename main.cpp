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

void insert(Node* &root, int val) {
    if(!root)
        root = new Node(val);

    if(root->val > val) {

        if(!root->left)
            root->left = new Node(val);
        else
            insert(root->left, val);

    } else {

        if(!root->right)
            root->right = new Node(val);
        else
            insert(root->right, val);
        
    }
}

int main ()
{
    Node* root = input_trees();
    int val;
    cin >> val;
    level_order(root);
    cout << endl;
    insert(root, val);
    level_order(root);
    
    return 0;
}