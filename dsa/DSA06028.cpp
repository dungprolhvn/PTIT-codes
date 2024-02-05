#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int n;
    stack<string> result;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n-1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[idx]) idx = j;
        }
        swap(v[i], v[idx]);
        stringstream ss;
        ss << "Buoc " << i+1 << ": ";
        for (int num : v) ss << num << " ";
        result.push(ss.str());
    }
    while (!result.empty()) {
        cout << result.top() << endl;
        result.pop();
    }
    return 0;
}