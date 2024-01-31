#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


vector<int> stackDFS(unordered_map<int, set<int>> adjacencyList, int v, int start) {
    vector<int> path;
    vector<int> visited(v+1, 0);
    stack<int> stackFrontier;
    stackFrontier.push(start);
    set<int>::reverse_iterator rit;
    while (!stackFrontier.empty()) {
        int u = stackFrontier.top();
        stackFrontier.pop();
        if (!visited[u]) {
            visited[u] = 1;
            path.push_back(u);
            for (rit = adjacencyList[u].rbegin(); rit != adjacencyList[u].rend(); rit++) {
                stackFrontier.push(*rit);
            }
        }
    }
    return path;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int v, e, u;
        cin >> v >> e >> u;
        // Read edge list and store as a adjacency list
        unordered_map<int, set<int>> adjacencyList;
        for (int i = 1; i <= v; i++) {
            adjacencyList[i] = set<int>();
        }
        int a, b;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            adjacencyList[a].insert(b);
            adjacencyList[b].insert(a);
        }
        // DFS
        vector<int> result = stackDFS(adjacencyList, v, u);
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}