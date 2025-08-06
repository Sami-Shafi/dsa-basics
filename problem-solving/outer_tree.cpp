#include <bits/stdc++.h>
using namespace std;

// You will be given a binary tree as input in level order. You need to print the outer side of the binary tree. See the sample input output for more clarifications. You need to print from the left most leaf node to right most leaf node.

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

Node* input_tree() {
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* f = q.front();
        q.pop();
        
        int l, r;
        cin >> l >> r;

        if(l==-1 && r==-1)
            continue;
        
        if(l!=-1){
            f->left = new Node(l);
            q.push(f->left);
        }

        if(r!=-1){
            f->right = new Node(r);
            q.push(f->right);
        }
    }

    return root;
}

void left_recur(Node* root) {
    if(!root)
        return;
    
    if(root->left) {
        left_recur(root->left);
    }else if(root->right) {
        left_recur(root->right);
    }

    cout << root->val << " ";
}

void right_recur(Node* root) {
    if(!root)
        return;

    cout << root->val << " ";
    
    if(root->right) {
        right_recur(root->right);
    }else if(root->left) {
        right_recur(root->left);
    }
}

int main ()
{
    Node* root = input_tree();
    
    if(!root)
        return 0;
    
    if(root->left)
        left_recur(root->left);
    
    cout << root->val << " ";

    if(root->right)
        right_recur(root->right);

    return 0;
}