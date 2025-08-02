#include <bits/stdc++.h>
using namespace std;

// You will be given a binary tree as input in level order. Also you will be given a level X. You need to print all the node's values in that level from left to right. Assume that level starts from 0.

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

queue<pair<Node*, int>> level_order(Node* root) {
    queue<pair<Node*, int>> q;
    queue<pair<Node*, int>> q2;
    q.push({root, 0});
    q2.push({root, 0});

    while (!q.empty())
    {
        Node* frontNode = q.front().first;
        int level = q.front().second;

        q.pop();
        
        if(frontNode->left) {
            q.push({frontNode->left, level+1});
            q2.push({frontNode->left, level+1});
        }
        if(frontNode->right) {
            q.push({frontNode->right, level+1});
            q2.push({frontNode->right, level+1});
        }
    }
    
    return q2;
}

void print_p(queue<pair<Node*,int>> q, int x) {
    if(x < 0 || x > q.back().second) {
        cout << "Invalid";
        return;
    }

    while (!q.empty())
    {
        int nodeVal = q.front().first->val;
        int level = q.front().second;
        q.pop();

        if(x == level)
            cout << nodeVal << " ";
    } 
}

int main ()
{
    Node* root = input_tree();
    queue<pair<Node*, int>> q = level_order(root);
    int x;
    cin >> x;
    print_p(q, x);

    return 0;
}