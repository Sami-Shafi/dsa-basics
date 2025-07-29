#include <bits/stdc++.h>
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

Node* input_tree() {
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        if(l != -1) {
            f->left = new Node(l);
            q.push(f->left);
        }
        if(r != -1) {
            f->right = new Node(r);
            q.push(f->right);
        }
    }
    
    return root;
}

void level_order(Node* root) {
    if(!root) {
        cout << "No Tree" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* frontNode = q.front();
        q.pop();
        cout << frontNode->val << " ";
        if(frontNode->left)
            q.push(frontNode->left);
        if(frontNode->right)
            q.push(frontNode->right);
    }
    
}

int count_Nodes(Node* root) {
    if (!root)
        return 0;

    int l = count_Nodes(root->left);
    int r = count_Nodes(root->right);

    return l + r + 1;
}

int count_Leaf_Nodes(Node* root) {
    if (!root)
        return 0;

    if(!root->left && !root->right)
        return 1;

    int l = count_Leaf_Nodes(root->left);
    int r = count_Leaf_Nodes(root->right);

    return l + r;
}

int main ()
{
    Node* root = input_tree();
    cout << count_Nodes(root) << endl;
    cout << count_Leaf_Nodes(root) << endl;
    level_order(root);
    
    return 0;
}
