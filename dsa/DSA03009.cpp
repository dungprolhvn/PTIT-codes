#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct Job {
    int id, dl, pf;
};

bool sxCV(Job a, Job b) {
    return a.pf > b.pf;
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        vector<Job> jobs(n);
        for (int i = 0; i < n; i++) {
            cin >> jobs[i].id >> jobs[i].dl >> jobs[i].pf;
        }
        sort(jobs.begin(), jobs.end(), sxCV);
        vector<Job> chosen;
        vector<bool> occupied(1005, 0);
        int time = 0;
        int totalProfit = 0;
        for (int i = 0; i < n; i++) {
            int slot = jobs[i].dl;
            while (slot >= 1 && occupied[slot]) slot--;
            if (slot >= 1) {
                totalProfit += jobs[i].pf;
                occupied[slot] = true;
                chosen.pb(jobs[i]);
            }
        }
        
        cout << chosen.size() << " " << totalProfit << endl;
    }
    return 0;
}