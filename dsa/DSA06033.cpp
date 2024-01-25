#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ji = -1;
        int i = 0, j = n - 1;
        while (i < j) {
            if (arr[j] > arr[i]) {
                ji = j - i;
                break;
            }
            else {
                if (arr[i] - arr[j] > arr[i+1] - arr[j]) i++;
                else j--;
            }
        }
        cout << ji << endl;
        delete[] arr;
    }
    return 0;
}