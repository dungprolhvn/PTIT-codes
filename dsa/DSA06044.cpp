#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> odd, even;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (i&1) even.pb(tmp);
        else odd.pb(tmp);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<int>());
    int a = 0, b = 0;
    for (int i = 1; i <= n; i++) {
        if (i&1) cout << odd[a++] << " ";
        else cout << even[b++] << " ";
    }
    cout << endl;
    return 0;
}