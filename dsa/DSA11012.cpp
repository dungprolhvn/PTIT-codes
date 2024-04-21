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

void insert(Node* n, int parent, int child, int d) {
    if (n->val == parent) {
        Node* tmp = new Node(child);
        if (d == 'L') n->left = tmp;
        else n->right = tmp;
    }
    else {
        if (n->left != nullptr) insert(n->left, parent, child, d);
        if (n->right != nullptr) insert(n->right, parent, child, d);
    }
}

bool equal_tree(Node* t1, Node* t2) {
    // base
    if (t1 == nullptr && t2 == nullptr) return true;
    if (t1 == nullptr || t2 == nullptr) return false;
    if (t1->val != t2->val) return false;
    // recursive
    return equal_tree(t1->left, t2->left) && equal_tree(t1->right, t2->right);
}

int main()
{
    int t, n, m; cin >> t;
    while (t--)
    {
        int a, b; char c;
        cin >> n;
        Node* tree1 = nullptr;
        Node* tree2 = nullptr;
        for (int i = 0; i < n; i++) {
            cin >> a >> b >> c;
            if (tree1 == nullptr) {
                tree1 = new Node(a);
                Node* tmp = new Node(b);
                if (c == 'L') tree1->left = tmp;
                else tree1->right = tmp;
            }
            else {
                insert(tree1, a, b, c);
            }
        }
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> a >> b >> c;
            if (tree2 == nullptr) {
                tree2 = new Node(a);
                Node* tmp = new Node(b);
                if (c == 'L') tree2->left = tmp;
                else tree2->right = tmp;
            }
            else {
                insert(tree2, a, b, c);
            }
        }
        if (equal_tree(tree1, tree2)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}