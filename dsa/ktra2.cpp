#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    while (true) {
        bool stop = true;
        vector<int> t;
        for (int i = 0; i < n; i++) {
            if (v[i] != -1) {
                t.pb(v[i]);
                v[i] = -1;
                break;
            } 
        }
        if (stop) break;
        
    }
    cout << cnt << endl;
    return 0;
}