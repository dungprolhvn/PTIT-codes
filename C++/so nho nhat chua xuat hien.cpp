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
		sort(arr, arr + n);
		// skip negative elements
		int i = 0;
		while (arr[i] <= 0)
		{
			i++;
		}
		int ans = 1;
		for (int j = i; j < n; j++)
		{
			if (arr[j] <= ans)
			{
				ans = arr[j] + 1;
			}
			else
			{
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
