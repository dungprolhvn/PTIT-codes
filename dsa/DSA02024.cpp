#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int n;
vector<int> v; // element vector
vector<int> sub; // subset vector
vector<int> indexInV; // Index in vector v of subset elements

vector<string> result;

void Try(int i) {
    if (i == 0) {
        sub.clear();
        indexInV.clear();
    }
    if (i > 1) {
        string tmp = "";
        for (int e : sub) {
            tmp += (to_string(e) + " ");
        }
        result.push_back(tmp);
    }
    for (int j = n - 1; j >= 0; j--) {
        // Chosse element that is greater than previous element and higher indexInV
        if (i == 0 || (v[j] > sub[i-1] && j > indexInV.back()))  {
            // Choose
            sub.push_back(v[j]);
            indexInV.push_back(j);
            // Choose the next possible element
            Try(i + 1);
            // Unchoose to choose lower element than chose element but still satisfy condition
            sub.pop_back();
            indexInV.pop_back();
        }
    }
}


int main()
{
    int tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    Try(0);
    sort(result.begin(), result.end());
    for (string r : result) {
        cout << r << endl;
    }
    return 0;
}