#include <bits/stdc++.h>

using namespace std;
bool isPerfectSquare(int n)
{
	int s = sqrt(n);
	return (s * s == n);
}
bool isFibo(int n)
{
	return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4);
}
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> v;
		int tmp;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			v.push_back(tmp);
		}
		for (int i = 0; i < n; i++)
		{
			if (isFibo(v[i]))
			{
				cout << v[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

