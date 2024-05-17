#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bool checkExp(string& exp) {
    int a, b, c;
    char op;
    if (sscanf(exp.c_str(), "%d %c %d = %d", &a, &op, &b, &c) == 4) {
        switch (op) {
            case '+': return a + b == c;
            case '-': return a - b == c;
            case '*': return a * b == c;
            case '/': return c * b == a;
            default: return false;
        }
    }
    return false;
}

char ops[] = {'+', '-', '*', '/'};

void Try(int index, string& exp, bool& found) {
    if (found) return;
    if (index == exp.size()) {
        if (checkExp(exp)) {
            cout << exp << endl;
            found = true;
        }
        return;
    }
    if (exp[index] == '?') {
        // if operator
        if (index == 3) {
            for (char c : ops) {
                exp[index] = c;
                if (!found) Try(index+1, exp, found);
                exp[index] = '?';
            }
        }
        // if number
        else {
            if (index == 0 || index == 5 || index == 10) {
                for (char i = '1'; i <= '9'; i++) {
                    exp[index] = i;
                    if (!found) Try(index+1, exp, found);
                    exp[index] = '?';
                }
            }
            else {
                for (char i = '0'; i <= '9'; i++) {
                    exp[index] = i;
                    if (!found) Try(index+1, exp, found);
                    exp[index] = '?';
                }
            }
        }
    }
    else {
        if (!found) Try(index+1, exp, found);
    }
}

int main()
{
    int t; cin >> t; cin.ignore();
    while (t--)
    {
        string exp;
        getline(cin, exp);
        bool found = false;
        Try(0, exp, found);
        if (!found) cout << "WRONG PROBLEM!\n";
    }
    return 0;
}