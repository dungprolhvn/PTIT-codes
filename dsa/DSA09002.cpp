#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int n; cin >> n; cin.ignore();
    string s;
    int tmp;
    vector<vector<int>> ds_canh(n+1);   
    for (int i = 1; i <= n; i++) {
        getline(cin, s);
        stringstream ss(s);
        while (ss >> tmp) ds_canh[i].pb(tmp);
    }
    for (int i = 1; i <= n; i++) {
        sort(ds_canh[i].begin(), ds_canh[i].end());
        for (int j : ds_canh[i]) {
            if (i < j)
                cout << i << " " << j << endl;
        }
    }
    return 0;
}