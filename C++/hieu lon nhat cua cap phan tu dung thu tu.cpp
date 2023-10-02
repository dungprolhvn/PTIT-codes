#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int arr[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int rs = -1;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				int tmp = arr[j] - arr[i];
				if (tmp > rs)
				{
					rs = tmp;
				}
			}
		}
		cout << rs << endl;
	}
	return 0;
}

