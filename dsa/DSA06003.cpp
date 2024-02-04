#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            int idx = i;
            for (int j = i+1; j < n; j++) {
                if (a[j] < a[idx]) idx = j;
            }
            if (i != idx) count++;
            swap(a[i], a[idx]);
        }
        cout << count << endl;
    }
    return 0;
}