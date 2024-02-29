#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


void process(vector<int>& v, int n) {
    stack<string> output;
    stringstream ss;
    while (n) {
        ss.str("");
        ss << "[";
        for (int i = 0; i < n; i++) {
            ss << v[i];
            if (i!=n-1) ss << " ";
        }
        ss << "]";
        output.push(ss.str());
        for (int i = 0; i < n-1; i++) {
            v[i] += v[i+1];
        }
        n--;
    }
    while (!output.empty()) {
        cout << output.top() << " ";
        output.pop();
    }
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        process(v, n);
        cout << endl;
    }
    return 0;
}