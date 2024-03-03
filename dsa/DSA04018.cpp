#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int search(vector<int> arr, int start, int end) {
    if (start > end) return -1;
    int mid = (start + end) / 2;
    if (arr[mid] && !arr[mid - 1]) return mid;
    else if (arr[mid] && arr[mid - 1]) return search(arr, start, mid-1);
    return search(arr, mid+1, end);
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        if (a[0] == 1) cout << 0;
        else if (a[n - 1] == 0) cout << n;
        else {
            cout << search(a, 0, n - 1);
        }
        cout << endl;
    }
    return 0;
}