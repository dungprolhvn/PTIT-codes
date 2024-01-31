#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        unordered_map<int, set<int>> adjacency_list ;
        for (int i = 1; i <= v; i++) {
            adjacency_list[i] = set<int>();
        }
        int a, b;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            adjacency_list[a].insert(b);
            adjacency_list[b].insert(a);
        }
        for (int i = 1; i <= v; i++) {
            printf("%d: ", i);
            for (int i : adjacency_list[i]) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}