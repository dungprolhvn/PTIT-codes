#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

vector<int> prevCombination(vector<int> v, int k, int n) {
    int i = k - 1;
    while (i > 0 && v[i] == v[i - 1]+1) i--;
    v[i] -= 1;
    if (i == 0 && v[i] == 0) {
        // if current combination is the first, return the last combination
        v[i] = n-k+i+1;
    }
    // Set all element after i to its max possible value 
    for (int j = i + 1; j < k; j++)
        v[j] = n-k+j+1;
    return v;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> c(k);
        for (int i = 0; i < k; i++) {
            cin >> c[i];
        }
        vector<int> prev_c = prevCombination(c, k, n);
        for (int num : prev_c) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}