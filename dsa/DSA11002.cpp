#include <bits/stdc++.h>
#define pb push_back
#define CONG 1001
#define TRU 1003
#define NHAN 1005
#define CHIA 1007
typedef unsigned long long ll;

using namespace std;



int calc(int* tree, int idx, int& n) {
    if (idx >= n) return 0;
    switch (tree[idx]) {
        case CONG: // tree[idx] == "+"
            return calc(tree, 2*idx+1, n) + calc(tree, 2*idx+2, n);
        case TRU: // tree[idx] == "-"
            return calc(tree, 2*idx+1, n) - calc(tree, 2*idx+2, n);
        case NHAN: // tree[idx] == "*"
            return calc(tree, 2*idx+1, n) * calc(tree, 2*idx+2, n);
        case CHIA: // tree[idx] == "/"
            return calc(tree, 2*idx+1, n) / calc(tree, 2*idx+2, n);
        default:
            return tree[idx];
    }
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        string tmp;
        cin >> n;
        cin.ignore();
        int tree[n];
        getline(cin, tmp);
        stringstream ss(tmp);
        for (int i = 0; i < n; i++) {
            ss >> tmp;
            if (tmp == "+") tree[i] = CONG;
            else if (tmp == "-") tree[i] = TRU;
            else if (tmp == "*") tree[i] = NHAN;
            else if (tmp == "/") tree[i] = CHIA;
            else tree[i] = stoi(tmp);
        }
        cout << calc(tree, 0, n) << endl;
    }
    return 0;
}