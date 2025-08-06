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
        Node* top = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node *ln = NULL, *rn = NULL;
        if (l != -1)
            ln = new Node(l);
        
        if (r != -1)
            rn = new Node(r);

        top->left = ln;
        top->right = rn;

        if(ln)
            q.push(ln);
        if(rn)
            q.push(rn);
    }

    return root;
    
}

bool search(Node* root, int val) {
    if(!root)
        return false;
    
    if(root->val == val)
        return true;

    if(root->val > val){
        return search(root->left, val);
    }else {
        return search(root->right, val);
    }
}

int main ()
{
    Node* root = input_trees();
    int val;
    cin >> val;
    if(search(root, val)) {
        cout << "Found!" << endl;
    }else {
        cout << "Not Found!" << endl;
    }
    
    return 0;
}