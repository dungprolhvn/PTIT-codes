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
        int maxx[n]; 
        maxx[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxx[i] = (maxx[i+1] > arr[i]) ? maxx[i+1] : arr[i];
        }
        int i = 0, j = 0;
        while (i < n && j < n) {
            if (maxx[j] > arr[i]) {
                ji = max(ji, j - i);
                j++;
            }
            else i++;
        }
        cout << ji << endl;
    }
    return 0;
}