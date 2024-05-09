#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

Node* constructTree(vector<int>& a, int n) {
    Node* root = new Node(a[0]);
    sort(a.begin()+1, a.end());
    queue<Node*> q;
    q.push(root);
    for (int i = 1; i < n; i++) {
        Node* node = q.front();
        if (node->left == nullptr) {
            node->left = new Node(a[i]);
            q.push(node->left);
        } else {
            node->right = new Node(a[i]);
            q.push(node->right);
            q.pop();
        }
    }
    return root;
}

vector<int> rightLevelOrder(Node* root) {
    vector<int> result;
    if (!root) return result;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* node = q.front();
            q.pop();
            if (i == size - 1) result.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
    return result;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        Node* root = constructTree(a, n);
        vector<int> rs = rightLevelOrder(root);
        for (int i : rs) cout << i << " ";
        cout << endl;
    }
    return 0;
}