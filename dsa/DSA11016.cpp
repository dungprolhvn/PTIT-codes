#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        int p, c; 
        char d;
        cin >> n;
        set<int> tree;
        for (int i = 0; i < n; i++) {
            cin >> p >> c >> d;
            tree.insert({p, c});
        }
        for (int i : tree) cout << i << " ";
        cout << endl;
    }
    return 0;
}