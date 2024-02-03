#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;



int sttTohop(vector<int> v, int n, int k)
{
    vector<int> c(k);
    for (int i = 0; i < k; i++)
    {
        c[i] = i + 1;
    }
    int countt = 1;
    while (true)
    {
        if (v == c) {
            break;
        }
        int i = k - 1;
        while (i >= 0 && c[i] == n - k + i + 1) i--;
        if (i < 0) break;
        c[i] += 1;
        for (int j = i + 1; j < k; j++) {
            c[j] = c[j-1] + 1;
        }
        countt++;
    }
    return countt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        cout << sttTohop(v, n, k) << endl;
    }
    return 0;
}