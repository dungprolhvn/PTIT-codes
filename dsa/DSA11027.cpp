#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;
    Node(int v) : val(v) {};
};

Node* constructTree(vector<int>& tree, int start, int end) {
    if (start > end) return nullptr;
    int mid = start + (end - start) / 2;
    Node* parent = new Node(tree[mid]);
    parent->left = constructTree(tree, start, mid - 1);
    parent->right = constructTree(tree, mid + 1, end);
    return parent;
}

int countLeaves(Node* tree) {
    if (tree == nullptr) return 0;
    if (tree->left == nullptr && tree->right == nullptr) return 1;
    return countLeaves(tree->left) + countLeaves(tree->right);
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> tree(n);
        for (int i = 0; i < n; i++) cin >> tree[i];
        sort(tree.begin(), tree.end());
        Node* tr = constructTree(tree, 0, n - 1);
        cout << countLeaves(tr) << endl;
    }
    return 0;
}