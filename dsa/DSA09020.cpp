#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{   
    int n;
    cin >> n; cin.ignore();
    vector<vector<int>> matranKe(n+1, vector<int>(n+1, 0));
    int tmp; string s;
    for (int i = 1; i <= n; i++) {
        getline(cin, s);
        stringstream ss(s);
        while (ss >> tmp) {
            matranKe[i][tmp] = matranKe[tmp][i] = 1;
            
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << matranKe[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}