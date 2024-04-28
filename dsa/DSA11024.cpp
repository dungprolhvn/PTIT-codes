#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

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
        int rootIndex = n - 1 / 2;
        cout << tree[rootIndex] << endl;
    }
    return 0;
}