#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bool dfs(vector<vector<int>> dsKe, int v, int e, pair<int, int> canh)
{
    // Xoa canh khoi ds ke
    // int l1 = dsKe[canh.first].size(), l2 = dsKe[canh.second].size();
    // for (int i = 0; i < l1; i++) {
    //     if (dsKe[canh.first][i] == canh.second) {
    //         dsKe[canh.first].erase(dsKe[canh.first].begin()+i);
    //         break;
    //     }
    // }
    // for (int i = 0; i < l2; i++) {
    //     if (dsKe[canh.second][i] == canh.first) {
    //         dsKe[canh.second].erase(dsKe[canh.second].begin()+i);
    //         break;
    //     }
    // }
    // dfs
    vector<int> result;
    stack<int> stFrontier;
    vector<bool> visited(v + 1, 0);
    stFrontier.push(1);
    while (!stFrontier.empty())
    {
        int u = stFrontier.top();
        stFrontier.pop();
        if (!visited[u])
        {
            result.pb(u);
            visited[u] = true;
            for (int j : dsKe[u])
            {
                if (!(u == canh.first && j == canh.second) && !(u == canh.second && j == canh.first))
                    stFrontier.push(j);
            }
        }
    }
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
            return false;
    }
    return true;
}

void lietKeCanhCau(vector<pair<int, int>> dsCanh, int v, int e)
{
    vector<vector<int>> dsKe(v + 1);
    for (int i = 1; i <= e; i++)
    {
        dsKe[dsCanh[i].first].pb(dsCanh[i].second);
        dsKe[dsCanh[i].second].pb(dsCanh[i].first);
    }
    for (int i = 1; i <= e; i++)
    {
        if (!dfs(dsKe, v, e, dsCanh[i]))
        {
            cout << dsCanh[i].first << " " << dsCanh[i].second << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;

        vector<pair<int, int>> edgeList(e + 1);
        for (int i = 1; i <= e; i++)
        {
            cin >> edgeList[i].first >> edgeList[i].second;
        }
        lietKeCanhCau(edgeList, v, e);
    }
    return 0;
}