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
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* frontNode = q.front();
        q.pop();

        int leftVal, rightVal;
        cin >> leftVal >> rightVal;
        Node* leftNode, *rightNode;

        if(leftVal != -1) {
            frontNode->left  = new Node(leftVal);
        }
            
        if(rightVal != -1) {
            frontNode->right = new Node(rightVal);
        }

        if(frontNode->left)
            q.push(frontNode->left);
        if(frontNode->right)
            q.push(frontNode->right);
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
    if (!root) {
        return 0;
    }

    int l = count_Nodes(root->left);
    int r = count_Nodes(root->right);

    return l + r + 1;
}

int main ()
{
    Node* root = input_tree();
    cout << count_Nodes(root);
    
    return 0;
}
