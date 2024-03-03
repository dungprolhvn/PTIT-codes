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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int rs = INT_MIN, sum;
        for (int i = 0; i < n; i++)
        {
            sum = 0; 
            for (int j = i; j < n; j++) {
                sum += a[j];
                if (sum > rs) rs = sum;
            }
        }
        cout << rs << endl;
    }
    return 0;
}