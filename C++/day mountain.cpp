#include <bits/stdc++.h>

using namespace std;
bool isMountain(vector<int> v, int left, int right)
{
	bool checkGiam = false;
	for (int i = left; i < right; i++)
	{
		if (v[i] >= v[i + 1])
		{
			checkGiam = true;
		}	
		else
		{
			if (checkGiam)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int t, n, l, r;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> v; int tmp;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			v.push_back(tmp);
		}
		cin >> l >> r;
		if (isMountain(v, l, r))
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	}
	return 0;
}

