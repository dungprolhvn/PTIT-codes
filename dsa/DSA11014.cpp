#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct Node {
    int val;
    char pos;
    Node* left;
    Node* right;
    Node(int v, char d = 'N') {
        val = v;
        pos = d;
        left = right = nullptr;
    }
};

int sumRightLeaves(Node* tree) {
    if (tree == nullptr) return 0;
    if (tree->left == nullptr && tree->right == nullptr) {
        if (tree->pos == 'L') return 0;
        else return tree->val;
    }
    return sumRightLeaves(tree->left) + sumRightLeaves(tree->right);
}

void deleteTree(Node* tree) {
    if (tree == nullptr) return;
    deleteTree(tree->left);
    deleteTree(tree->right);
    delete tree;
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        int p, c; char d;
        cin >> n;
        Node* tree = nullptr;
        unordered_map<int, Node*> nodeMap;
        //
        cin >> p >> c >> d;
        tree = nodeMap[p] = new Node(p);
        nodeMap[c] = new Node(c, d);
        if (d == 'L') nodeMap[p]->left = nodeMap[c];
        else nodeMap[p]->right = nodeMap[c];
        //
        for (int i = 1; i < n; i++) {
            cin >> p >> c >> d;
            if (d == 'L') {
                nodeMap[p]->left = new Node(c, 'L');
                nodeMap[c] = nodeMap[p]->left;
            }
            else {
                nodeMap[p]->right = new Node(c, 'R');
                nodeMap[c] = nodeMap[p]->right;
            }
        }
        //
        cout << sumRightLeaves(tree) << endl;
        deleteTree(tree);
    }
    return 0;
}