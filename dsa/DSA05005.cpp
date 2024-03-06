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
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        vector<int> length(n, 0); // length[i]: maximum length of subsequence ends at i
        for (int i = 0; i < n; i++) {
            length[i] = 1;
            for (int j = 0; j < i; j++) {
                if (v[i] >= v[j] && length[i] < length[j]+1) {
                    length[i] = length[j]+1;
                }
            }
        }
        cout << n - *max_element(length.begin(), length.end()) << endl;
    }
    return 0;
}