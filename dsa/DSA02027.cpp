#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int cost[16][16];
int n, totalCost = 0, currCost = 0, minCost = INT_MAX;
int chosen[16] = {0};
int path[16] = {0};
int optPath[16];


void update() {
    if (currCost + cost[path[n]][1] < totalCost)  {
        totalCost = currCost + cost[path[n]][1];
        for (int i = 1; i <= n; i++) {
            optPath[i] = path[i];
        }
    }
}

void Try(int k) {
    for (int i = 2; i <= n; i++) {
        if (!chosen[i]) {
            chosen[i] = 1;
            path[k] = i;
            currCost += cost[path[k - 1]][path[k]];
            if (k == n) update();
            else if (k < n && currCost + minCost * (n - k) <= totalCost) {
                Try(k+1);
            }
            // backtrack
            chosen[i] = 0;
            currCost -= cost[path[k - 1]][path[k]];
        }
    }
}

void preProcess() {
    optPath[1] = 1; 
    int idx = 2;
    vector<bool> visited(n+1, 0);
    int count = n;
    int city = 1;
    visited[1] = 1;
    while (count > 0) {
        int min = -1;
        for (int i = 1; i <= n; i++) {
            if (!visited[i] && (min == -1 || cost[city][min] > cost[city][i])) min = i;
        }
        if (min != -1) {
            visited[min] = 1;
            totalCost += cost[city][min];
            city = min;
            optPath[idx++] = min;
        }
        count--;
    }
    totalCost += cost[city][1];
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> cost[i][j];
            if (cost[i][j] < minCost) minCost = cost[i][j];
        }
    }
    // tham lam
    preProcess();
    // nhanh can
    path[1] = 1;
    Try(2);
    // in kq
    cout << totalCost << endl;
    return 0;
}