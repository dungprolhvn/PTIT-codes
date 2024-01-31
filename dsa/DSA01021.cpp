#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


vector<int> intersectt(vector<int> a, vector<int> b, int n, int m)
{
    vector<int> result;
    int i = 1, j = 1;
    while (i <= n && j <= m)
    {
        if (a[i] == b[j])
        {
            result.push_back(a[i]);
            i++, j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return result;
}


int diff_next_comb(vector<int> c, int k, int n) {
    vector<int> comb(c);
    int j = k - 1;
    while (comb[j] == (n - k + j)) {
        j--;
    }
    if (j <= 0) return k;
    comb[j] += 1;
    for (int i = j + 1; i <= k; i++) {
        comb[i] = comb[i - 1] + 1;
    }
    vector<int> giao = intersectt(c, comb, k, k);
    return k - giao.size();
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> c(k + 1);
        for (int i = 1; i <= k; i++) {
            cin >> c[i];
        }
        cout << diff_next_comb(c, k, n) << endl;
    }
    return 0;
}