#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct Node {
    char val;
    Node* left;
    Node* right;
    Node(char v, Node* l = nullptr, Node* r = nullptr) {
        val = v;
        left = l;
        right = r;
    }
};

Node* constructTree(string postFix) {
    stack<Node*> st;
    for (char c : postFix) {
        if (isalpha(c)){
            Node* tmp = new Node(c);
            st.push(tmp);
        }
        else {
            Node* r = st.top();
            st.pop();
            Node* l = st.top();
            st.pop();
            Node *tmp = new Node(c, l, r);
            st.push(tmp);
        }
    }
    return st.top();
}

void inOrder(Node* tree) {
    if (tree != nullptr) {
        inOrder(tree->left);
        cout << tree->val;
        inOrder(tree->right);
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string postfix;
        cin >> postfix;
        Node* tree = constructTree(postfix);
        inOrder(tree);
        cout << endl;
    }
    return 0;
}