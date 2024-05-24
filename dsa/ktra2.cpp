#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct Node {
    char c;
    Node* left = nullptr;
    Node* right = nullptr;
    Node(char cc) : c(cc) {};
};

void rnl(Node* tree) {
    if (tree == nullptr) return;
    rnl(tree->right);
    if (tree->c != 'N') cout << tree->c << " ";
    rnl(tree->left);
}

void levelOrder(Node *tree)
{
    if (tree == nullptr)
        return;
    queue<Node *> q;
    q.push(tree);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        cout << node->c << " ";
        if (node->left != nullptr)
            q.push(node->left);
        if (node->right != nullptr)
            q.push(node->right);
    }
}

int main()
{
    int t; cin >> t; cin.ignore();
    while (t--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        char tmp;
        ss >> tmp;
        Node* tree = new Node(tmp);
        queue<Node*> q;
        q.push(tree);
        while (ss >> tmp) {
            Node* parent = q.front();
            q.pop();
            Node* child = new Node(tmp);
            if (parent->left == nullptr) parent->left = child;
            else parent->right = child;
            if (parent->left == nullptr || parent->right == nullptr) q.push(parent);
            q.push(child);
        }
        levelOrder(tree);
        //rnl(tree);
        cout << endl;   
    }
    return 0;
}