#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;

ll merge(int* arr, int left, int mid, int right) {
    ll count = 0;
    int leftSize = mid - left + 1, rightSize = right - mid;
    int leftArr[leftSize];
    int rightArr[rightSize];
    for (int i = left; i <= mid; i++) {
        leftArr[i - left] = arr[i];
    }
    for (int i = mid + 1; i <= right; i++) {
        rightArr[i - mid - 1] = arr[i];
    }
    int i = 0, j = 0;
    int idx = left;
    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[idx++] = leftArr[i++];
        }
        else {
            count += (leftSize - i);
            arr[idx++] = rightArr[j++];
        }
    }
    while (i < leftSize) {
        arr[idx++] = leftArr[i++];
    }
    while (j < rightSize) {
        arr[idx++] = rightArr[j++];
    }
    return count;
}

ll solve(int* arr, int start, int end) {
    if (start >= end) return 0;
    int mid = start + (end - start) / 2;
    ll x = solve(arr, start, mid);
    ll y = solve(arr, mid+1, end);
    ll z = merge(arr, start, mid, end);
    return x + y + z;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(arr, 0, n - 1) << endl;
    }
    return 0;
}