#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define sec second
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t; cin.ignore();
    string line1, line2, word;
    int a, b;
    while (t--)
    {
        getline(cin, line1);
        getline(cin, line2);
        stack<pair<int, int>> pol1, pol2;
        stack<pair<int, int>> pol;
        stringstream ss1(line1), ss2(line2);
        while (ss1 >> word) {
            if (word == "+") continue;
            sscanf(word.c_str(), "%d*x^%d", &a, &b);
            pol1.push(make_pair(a, b));
        }
        while (ss2 >> word) {
            if (word == "+") continue;
            sscanf(word.c_str(), "%d*x^%d", &a, &b);
            pol2.push(make_pair(a, b));
        }
        while (!pol1.empty() && !pol2.empty()) {
            if (pol1.top().sec == pol2.top().sec) {
                pol.push(make_pair(pol1.top().fst + pol2.top().fst, pol1.top().sec));
                pol1.pop();
                pol2.pop();
            }
            else if (pol1.top().sec < pol2.top().sec) {
                pol.push(pol1.top());
                pol1.pop();
            }
            else {
                pol.push(pol2.top());
                pol2.pop();
            }
        }
        while (!pol1.empty()) {
            pol.push(pol1.top());
            pol1.pop();
        }
        while (!pol2.empty()) {
            pol.push(pol2.top());
            pol2.pop();
        }
        stringstream result;
        while (!pol.empty()) {
            auto p = pol.top();
            pol.pop();
            result << p.fst << "*x^" << p.sec << " + ";
        }
        string output = result.str();
        cout << output.substr(0, output.length()-3) << endl;
    }
    return 0;
}