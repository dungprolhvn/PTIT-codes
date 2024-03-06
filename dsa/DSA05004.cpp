#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<int> length(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (v[j] < v[i] && length[j]+1 > length[i]) {
                length[i] = length[j]+1;
            }
        }
    }
    cout << *max_element(length.begin(), length.end()) << endl;
    return 0;
}