#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    string num;
    int t, n; cin >> t;
    while (t--)
    {
        stack<string> output;
        cin >> n;
        queue<string> q;
#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

        using namespace std;

        int main()
        {
            string num;
            int t, n;
            cin >> t;
            while (t--)
            {
                int count = 0;
                stringstream output;
                cin >> n;
                queue<string> q;
                q.push("6");
                q.push("8");
                while (q.front().size() <= n)
                {
                    count++;
                    num = q.front();
                    q.pop();
                    q.push(num + "6");
                    q.push(num + "8");
                    output << num << " ";
                }
                cout << count << endl
                     << output.str() << endl;
            }
            return 0;
        }
        q.push("6");
        q.push("8");
        while (q.front().size() <= n) {
            num = q.front();
            q.pop();
            q.push(num+"6");
            q.push(num+"8");
            output.push(num);
        }
        cout << output.size() << endl;
        while (!output.empty()) {
            cout << output.top() << " ";
            cout
        }
    }
    return 0;
}