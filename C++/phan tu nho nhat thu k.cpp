#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);
		cout << arr[k - 1] << endl;
		delete(arr);
	}
	return 0;
}

