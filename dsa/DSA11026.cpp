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

Node* constructAvlTree(vector<int>& v, int start, int end) {
    if (start > end) return nullptr;
    int mid = start + (end - start) / 2;
    Node* tree = new Node(v[mid]);
    tree->left = constructAvlTree(v, start, mid - 1);
    tree->right = constructAvlTree(v, mid + 1, end);
    return tree;
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
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        Node* tree = constructAvlTree(v, 0, n - 1);
        postOrder(tree);
        cout << endl;
    }
    return 0;
}