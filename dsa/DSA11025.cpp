#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

void preOrder(vector<int>& inOrder, int start, int end) {
    if (start > end) return;
    // 
    int rootIndex = start + (end - start) / 2;
    int root = inOrder[rootIndex];
    // print
    cout << root << " ";
    preOrder(inOrder, start, rootIndex - 1);
    preOrder(inOrder, rootIndex + 1, end);
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> tree(n);
        for (int i = 0; i < n; i++) {
             cin >> tree[i];
        }
        sort(tree.begin(), tree.end());
        preOrder(tree, 0, n - 1);
        cout << endl;
    }
    return 0;
}