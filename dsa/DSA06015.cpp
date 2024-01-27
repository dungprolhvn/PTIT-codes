#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


void merge(int *a, int l, int m, int r) {
    // Copy two half to two temp array
    int l1 = m - l + 1;
    int l2 = r - m;
    int *ar = new int[l1];
    int *br = new int[l2];
    for (int i = 0; i < l1; i++) {
        ar[i] = a[i + l];
    }
    for (int i = 0; i < l2; i++) {
        br[i] = a[i + m + 1];
    }
    // Merge
    int idx = l, i = 0, j = 0;
    while (i < l1 && j < l2) {
        if (ar[i] <= br[j]) {
            a[idx++] = ar[i++];
        }
        else {
            a[idx++] = br[j++];
        }
    }
    while (i < l1) {
        a[idx++] = ar[i++];
    }
    while (j < l2) {
        a[idx++] = br[j++];
    }
}


void mergeSort(int *a, int start, int end) {
    if (start == end) return;
    int mid = start + (end - start) / 2;
    mergeSort(a, start, mid);
    mergeSort(a, mid + 1, end);
    merge(a, start, mid, end);
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        mergeSort(a, 0, n - 1);

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        delete[] a;
    }
    return 0;
}