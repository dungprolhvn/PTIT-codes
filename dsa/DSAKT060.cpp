#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
const int MAX = 1e5;

string num;
bool tree[5*MAX];

bool isPalindrome(int start, int end) {
    while (start < end) {
        if (num[start++] != num[end--]) return false;
    }
    return true;
}

void buildTree(int node, int start, int end) {
    if (start == end) {
        tree[node] = true;
        return;
    }
    int mid = start + (end - start) / 2;
    buildTree(2*node+1, start, mid);
    buildTree(2*node+2, mid + 1, end);
    tree[node] = tree[2*node+1] && tree[2*node+2] && isPalindrome(start, end);
}

bool query(int node, int start, int end, int l, int r) {
    if (l > end || r < start) return true;
    if (l <= start && r >= end) return tree[node];
    int mid = start + (end - start) / 2;
    return query(2*node+1, start, mid, l, r) && query(2*node+2, mid+1, end, l, r);
}

void update(int node, int start, int end, int index, int val) {
    if (start == end) {
        num[index] = val + '0';
        tree[node] = true;
        return;
    }
    int mid = start + (end - start) / 2;
    if (index <= mid) {
        update(2*node+1, start, mid, index, val);
    } else {
        update(2*node+2, mid+1, end, index, val);
    }
    tree[node] = tree[2 * node + 1] && tree[2 * node + 2] && isPalindrome(start, end);
}

int main()
{
    char op; int a, b, q;
    cin >> num >> q;
    int l = num.length();
    buildTree(1, 0, l - 1);
    while (q--) {
        cin >> op >> a >> b;
        if (op == 'q') {
            cout << (query(1, 0, l - 1, a - 1, b - 1) ? "YES\n" : "NO\n");
        }
        else {
            update(1, 0, l - 1, a - 1, b);
        }
    }
    return 0;
}