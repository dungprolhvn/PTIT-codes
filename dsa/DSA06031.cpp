#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

// AC
void maximumSubarrayElement(vector<int> v, int n, int k) {
    int maxOfSub = v[0];
    int idxMax = 0;
    for (int i = 1; i < k; i++)
    {
        if (maxOfSub < v[i])
        {
            maxOfSub = v[i];
            idxMax = i;
        }
    }
    cout << maxOfSub << " ";
    for (int i = k; i < n; i++)
    {
        // if idxMax in the current subarray
        if (idxMax <= i && idxMax >= i - k + 1)
        {
            if (v[i] > maxOfSub)
            {
                maxOfSub = v[i];
                idxMax = i;
            }
        }
        // else idxMax is not in the current subarray
        else
        {
            maxOfSub = v[i];
            idxMax = i;
            for (int p = i - k + 1; p < i; p++)
            {
                if (v[p] > maxOfSub)
                {
                    maxOfSub = v[p];
                    idxMax = p;
                }
            }
        }
        cout << maxOfSub << " ";
    }
    cout << endl;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        deque<int> dq(k);
        for (int i = 0; i < k; i++) {
            while (!dq.empty() && v[i] > v[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for (int i = k; i < n; i++) {
            cout << v[dq.front()] << " ";
            while (!dq.empty() && dq.front() <= i-k) dq.pop_front();
            while (!dq.empty() && v[i] >= v[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        cout << v[dq.front()] << endl;
    }
    return 0;
}