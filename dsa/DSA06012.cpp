#include <bits/stdc++.h>

using namespace std;


void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int la[1000];
    int ra[1000];
    for (int i = 0; i < n1; i++) {
        la[i] = a[i + l];
    }
    for (int i = 0; i < n2; i++) {
        ra[i] = a[m + 1 + i];
    }
    int i = 0, j = 0, idx = l;
    while (i < n1 && j < n2) {
        if (la[i] >= ra[j]) {
            a[idx++] = la[i++];
        }
        else {
            a[idx++] = ra[j++];
        }
    }
    while (i < n1) {
        a[idx++] = la[i++];
    }
    while (j < n2) {
        a[idx++] =  ra[j++];
    }
}


void mergeSort(int *a, int l, int r) {
    if (l == r) return;
    int m = (r - 1 + l) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m+1, r);
    merge(a, l, m, r);
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        mergeSort(arr, 0, n - 1);
        for (int i = 0; i < k; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}