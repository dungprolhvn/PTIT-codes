#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) {
        val = v;
        left = nullptr;
        right = nullptr;
    }
};

void insert(Node*& tree, int n) {
    if (tree == nullptr) {
        tree = new Node(n);
    }
    if (tree->val > n) insert(tree->left, n);
    if (tree->val < n) insert(tree->right, n);
}

void preOrder(Node* tree) {
    if (tree != nullptr) {
        cout << tree->val << " ";
        preOrder(tree->left);
        preOrder(tree->right);
    }
}

int main()
{
    int t, n, num; cin >> t;
    while (t--)
    {
        Node* tree = nullptr;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> num;
            insert(tree, num);
        }
        preOrder(tree);
        cout << endl;
    }
    return 0;
}