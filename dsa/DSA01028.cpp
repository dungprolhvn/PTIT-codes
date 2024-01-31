#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

void print(int *a, int n, vector<int> e) {
    for (int i = 0; i < n; i++) {
        cout << e[a[i]-1] << " ";
    }
    cout << endl;
}


void generate_combinations(set<int> s, int k) {
    int n = s.size();
    vector<int> elements(s.begin(), s.end());
    // Init
    int *c = new int[k];
    for (int i = 0; i < k; i++) c[i] = i + 1;
    // Loop
    while (1) {
        print(c, k, elements);
        int i = k - 1;
        while (c[i] == (n-k+i+1)) i--;
        if (i<0) break;
        c[i] += 1;
        for (int j = i + 1; j < k; j++) c[j] = c[j-1] + 1;
    }
}


int main()
{
    int n, k;
    cin >> n >> k;
    set<int> s;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }
    generate_combinations(s, k);
    return 0;
}