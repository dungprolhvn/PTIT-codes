#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> sortedArr(arr);
        sort(sortedArr.begin(), sortedArr.end());
        int start, end;
        bool in = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] != sortedArr[i]) {
                start = i + 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] != sortedArr[i]) {
                end = i + 1;
                break;
            }
        }
        cout << start << " " << end << endl;
    }
    return 0;
}