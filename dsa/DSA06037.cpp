#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


void countM(vector<int> v, int n) {
    // for every m valid max [1..m] must <= min [m+1..n];
    vector<int> maxTillHere(n+1); // maxTillHere[i] is the max element of subarray ends at i
    vector<int> minFromHere(n+1); // minFromHere[i] is the min element of subarray starts at i
    maxTillHere[1] = v[1];
    minFromHere[n] = v[n];
    for (int i = 2; i <= n; i++) {
        maxTillHere[i] = (v[i] > maxTillHere[i-1]) ? v[i] : maxTillHere[i-1];
    }
    for (int i = n - 1; i >= 1; i--) {
        minFromHere[i] =  (v[i] < minFromHere[i+1]) ? v[i] : minFromHere[i+1];
    }
    int k = 0;
    vector<int> result;
    for (int i = 1; i < n; i++) { // excluded last element
        if (maxTillHere[i] <= minFromHere[i+1]) {
            k++;
            result.pb(i);
        }
    }
    if (!k) {
        cout << 0 << endl << endl;
        return;
    }
    cout << k << endl;
    for (int m : result) cout << m << " ";
    cout << endl;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++) {
            cin >>  v[i];
        }
        countM(v, n);
    }
    return 0;
}