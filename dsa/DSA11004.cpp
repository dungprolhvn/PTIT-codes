#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;
};

Node* createNode(int val) {
    Node* tmp = new Node();
    tmp->val = val;
    return tmp;
}

void insert(Node* root, int parent, int child, char dir) {
    if (root->val == parent) {
        Node* tmp = createNode(child);
        if (dir == 'L') root->left = tmp;
        else root->right = tmp;
    }
    else {
        if (root->left != nullptr) insert(root->left, parent, child, dir);
        if (root->right != nullptr) insert(root->right, parent, child, dir);
    }
}

void deleteTree(Node* root) {
    if (root == nullptr) {
        return;
    }
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

void levelOrder(Node* tree) {
    queue<Node*> q;
    q.push(tree);
    Node* tmp;
    while (!q.empty()) {
        tmp = q.front();
        q.pop();
        if (tmp == nullptr) continue;
        cout << tmp->val << " ";
        q.push(tmp->left);
        q.push(tmp->right);
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, p, c; char d;
        cin >> n;
        Node *root = nullptr;
        for (int i = 0; i < n; i++) {
            cin >> p >> c >> d;
            if (root == nullptr) {
                root = new Node();
                root->val = p;
                Node* tmp = createNode(c);
                if (d == 'L') root->left = tmp;
                else root->right = tmp;
            }
            else insert(root, p, c, d);
        }
        levelOrder(root);
        deleteTree(root);
    }
    return 0;
}