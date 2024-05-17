#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; ll k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        ll currSum = 0;
        int start = 0, end = 0;
        bool check = false;
        while (end < n)  {
            currSum += v[end];
            while (start < end && currSum > k) {
                currSum -= v[start];
                start++;
            }
            if (currSum == k) {
                check = true;
                break;
            }
            end++;
        }
        cout << (check ? "YES\n" : "NO\n");
    }   
    return 0;
}