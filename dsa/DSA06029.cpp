#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    stack<string> result;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        stringstream ss;
        ss << "Buoc " << i << ": ";
        for (int k = 0; k <= i; k++) ss << arr[k] << " ";
        result.push(ss.str());
    }
    while (!result.empty()) {
        cout << result.top() << endl;
        result.pop();
    }
    return 0;
}