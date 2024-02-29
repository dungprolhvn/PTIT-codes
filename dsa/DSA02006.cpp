#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int n;
vector<int> result;
vector<int> v;
bool found;

void inKq() {
    cout << "[";
    for (int i = 0; i < result.size()-1; i++) {
        cout << result[i] << " ";
        
    }
    cout << result.back() << "] ";
}


void quaylui(int value) {
    // quay lui theo gia tri
    for (int i = 0; i < n; i++) {
        if ((result.empty() || v[i] > result.back()) && v[i] <= value) {
            result.pb(v[i]);
            value -= v[i];
            if (value == 0) {
                found = true;
                inKq();
            }
            else {
                quaylui(value);
            }
            value += v[i];
            result.pop_back();
        }
    }
}


int main()
{
    int t, k; cin >> t;
    while (t--)
    {
        found = false;
        result.clear();
        cin >> n >> k;
        v = vector<int>(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        quaylui(k);
        if (!found) cout << -1;
        cout << endl;
    }
    return 0;
}