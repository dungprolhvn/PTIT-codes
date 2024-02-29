#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


stack<string> result;
vector<int> nums;
int n;


void update() {
    stringstream ss;
    ss << "(";
    for (int i = 0; i < nums.size()-1; i++) ss << nums[i] << " ";
    ss << nums.back() << ")";
    result.push(ss.str());
}


void partition(int value) {
    for (int i = 1; i <= n; i++) {
        if (i <= value && (nums.empty() || i <= nums.back())) {
            nums.pb(i);
            value -= i;
            if (value == 0) {
                update();
            }
            else if (value > 0) {
                partition(value);
            }
            value += i;
            nums.pop_back();
        }
    }
}


void printResult() {
    cout << result.size() << endl;
    while (!result.empty()) {
        cout << result.top() << " ";
        result.pop();
    }
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        partition(n);
        printResult();
        nums.clear();
        cout << endl;
    }
    return 0;
}