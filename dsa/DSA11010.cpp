#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

typedef struct TreeNode {
    int v;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    // constructor
    TreeNode (int val) : v(val), left(nullptr), right(nullptr) {}
} Node;


void insert(Node* root, int parent, int child, int pos) {
    if (root->v == parent) {
        Node* tmp = new Node(child);
        if (pos == 'L') root->left = tmp;
        else root->right = tmp;
    }
    else {
        if (root->left != nullptr) insert(root->left, parent, child, pos);
        if (root->right != nullptr) insert(root->right, parent, child, pos);
    }
}

int depth;
bool isPerfect(Node* tree, int level) {
    if (tree->left == nullptr && tree->right == nullptr) {
        if (depth == -1) {
            depth = level;
            return true;
        }
        else return level == depth;
    }
    if (tree->left == nullptr || tree->right == nullptr) return false;
    return isPerfect(tree->left, level+1) && isPerfect(tree->right, level+1);
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        depth = -1;
        int a, b; char c;
        Node* tree = nullptr;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a >> b >> c;
            if (tree == nullptr) {
                tree = new Node(a);
                Node* tmp = new Node(b);
                if (c == 'L') tree->left = tmp;
                else tree->right = tmp;
            }
            else insert(tree, a, b, c);
        }

        if (isPerfect(tree, 0)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}