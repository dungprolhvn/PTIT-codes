#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
ull hornier(int n, int x, vector<int> v)
{
	ull rs = v[0];
	ull div = pow(10, 9) + 7;
	for (int i = 1; i < n; i++)
	{
		rs = (rs * x + v[i]) % div;
	}
	return rs;
}
int main()
{
	int t, n, x;
	cin >> t;
	while (t--)
	{
		cin >> n >> x;
		vector<int> v;
		int tmp;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			v.push_back(tmp);
		}
		cout << hornier(n, x, v) << endl;
	}
	return 0;
}

