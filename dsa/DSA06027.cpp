#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        stack<string> result;
        stringstream ss;
        for (int i = 0; i < n - 1; i++) {
            ss.str("");
            ss.clear();
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[i]) {
                    swap(arr[j], arr[i]);
                }
            }
            ss << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; j++) {
                ss << arr[j] << " ";
            }
            result.push(ss.str());
        }
        while (!result.empty()) {
            cout << result.top() << endl;
            result.pop();
        }
    }
    return 0;
}