#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}


void bubbleSort(int *arr, int n, int x) {
    for (int i = 0; i < n - 1; i++) {
        bool changed = false;
        for (int j = 0; j < n - 1; j++) {
            if (abs(arr[j] - x) > abs(arr[j+1] - x)) {
                swap(arr[j], arr[j + 1]);
                changed = true;
            }
        }
        if (!changed) break; 
    }
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bubbleSort(arr, n, x);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}