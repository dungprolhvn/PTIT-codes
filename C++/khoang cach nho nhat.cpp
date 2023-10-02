#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int min = INT_MAX;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				int tmp = abs(arr[i] - arr[j]);
				min = (tmp < min) ? (tmp) : (min);
			}
		}
		cout << min << endl;
	}
	return 0;
}
