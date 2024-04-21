#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
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

void insert(Node* tree, int parent, int child, int pos) {
    if (tree->val == parent) {
        Node* tmp = new Node(child);
        if (pos == 'L') tree->left = tmp;
        else tree->right = tmp;
    }
    else {
        if (tree->left != nullptr) insert(tree->left, parent, child, pos);
        if (tree->right != nullptr) insert(tree->right, parent, child, pos);
    }
}

void spiralOrder(Node* tree) {
    queue<Node*> q;
    q.push(tree);
    bool dir = 0;
    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> values;
        for (int i = 0; i < levelSize; i++) {
            Node* tmp = q.front();
            q.pop();
            values.pb(tmp->val);
            if (tmp->left != nullptr) q.push(tmp->left);
            if (tmp->right != nullptr) q.push(tmp->right);
        }
        if (dir) for (int i : values) cout << i << " ";
        else {
            for (auto it = values.rbegin(); it != values.rend(); it++) {
                cout << *it << " ";
            }
        }
        dir = !dir;
    }
    cout << endl;
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        Node* tree = nullptr;
        int u, v; char x;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> u >> v >> x;
            if (tree == nullptr) {
                tree = new Node(u);
                Node* tmp = new Node(v);
                if (x == 'L') tree->left = tmp;
                else tree->right = tmp;
            }
            else insert(tree, u, v, x);
        }
        spiralOrder(tree);
    }
    return 0;
}