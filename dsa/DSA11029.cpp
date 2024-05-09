#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

vector<vector<int>> paths;
vector<int> path;

struct Node {
    int val;
    vector<Node*> children;
    Node(int v) : val(v) {};
    ~Node() {
        for (Node* child : children) {
            delete child;
        }
    }
};

void insert(Node* tree, int parent, int child) {
    if (tree->val == parent) {
        tree->children.pb(new Node(child));
    }
    else {
        for (Node* c : tree->children) {
            insert(c, parent, child);
        }
    }
}

void dfs(Node* tree, vector<int>& path) {
    path.pb(tree->val);
    if (tree->children.empty()) 
        paths.pb(path);
    else {
        for (Node* child : tree->children) {
            dfs(child, path);
        }
    }
    path.pop_back();
}

bool cmpVec(vector<int>& a, vector<int>& b) {
    return a.back() < b.back();
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        int u, v;
        cin >> n;
        cin >> u >> v;
        Node* tree = new Node(u);
        tree->children.pb(new Node(v));
        for (int i = 1; i < n - 1; i++) {
            cin >> u >> v;
            insert(tree, u, v);
        }

        dfs(tree, path);
        sort(paths.begin(), paths.end(), cmpVec);
        for (auto p : paths) {
            for (int num : p) cout << num << ' ';
            cout << endl;
        }
        delete tree;
        path.clear();
        paths.clear();
    }
    return 0;
}