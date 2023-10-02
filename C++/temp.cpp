#include <bits/stdc++.h>

using namespace std;

void findMins(vector<int> v)
{
	if (v.size() < 2)
	{
		cout << -1 << endl;
		return;
	}
	int min = v[0], min2 = v[1];
	for (int i = 2, s = v.size(); i < s; i++)
	{
		if (v[i] < min)
		{
			if (v[i] < min2)
			{
				min = min2;
				min2 = v[i];
			}
			else
			{
				min = v[i];
			}
		}
	}
	if (min == min2)
	{
		cout << -1 << endl;
		return;
	}
	cout << min2 << " " << min << endl;
}

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> arr;
		int tmp;
		while (n--)
		{
			cin >> tmp;
			arr.push_back(tmp);
		}
		findMins(arr);
	}
	return 0;
}
