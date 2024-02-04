#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int freq[100001] = {0};
        int count = 0;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        int max = *max_element(a, a+n);
        int min = *min_element(a, a+n);
        for (int i = min; i <= max; i++) {
            if (!freq[i]) count++;
        }
        cout << count << endl;
    }
    return 0;
}