#include <bits/stdc++.h>
using namespace std;

// You will be given a binary tree as input in level order. You need to output the sum of all node's values in that tree except the leaf nodes.

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

int sum_without_leaf(Node* root) {
    if(!root)
        return 0;
    
    if(!root->left && !root->right) {
        return 0;
    }

    return root->val + sum_without_leaf(root->left) + sum_without_leaf(root->right);
}

int main ()
{
    Node* root = input_tree();
    cout << sum_without_leaf(root);

    return 0;
}
