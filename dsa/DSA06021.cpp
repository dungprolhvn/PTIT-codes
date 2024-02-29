#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int find_idx(vector<int> a, int n) {
    // find index of max element in a
    int l = 0, h = n - 1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (a[mid] > a[mid+1]) {
            return mid;
        }
        else if (a[mid] < a[mid - 1]) {
            return mid - 1;
        }
        else if (a[l] >= a[mid]) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return -1;
}  


int binarySearch(vector<int> a, int l, int h, int x) {
    while (l <= h) {
        int mid = (l+h)/2;
        if (a[mid] == x) return mid;
        else if (a[mid] > x) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return -1;
}


int findX(vector<int> a, int pivot, int x) {
    int n = a.size();
    if (pivot == -1) {
        return binarySearch(a, 0, n-1, x);
    }
    if (a[pivot] == x) {
        return pivot;
    }
    
    if (x >= a[0] && x < a[pivot]) {
        return binarySearch(a, 0, pivot-1, x);
    }
    return binarySearch(a, pivot+1, n-1, x);
}


int main()
{
    int t; cin >> t; 
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int maxIdx = find_idx(a, n);
        cout << findX(a, maxIdx, x) + 1 << endl;
    }
    return 0;
}