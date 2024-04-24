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

void postOrder(Node* tree) {
    if (tree != nullptr) {
        postOrder(tree->left);
        postOrder(tree->right);
        cout << tree->val << " ";
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
        postOrder(tree);
        cout << endl;
    }
    return 0;
}