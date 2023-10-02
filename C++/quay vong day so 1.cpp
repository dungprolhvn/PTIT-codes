#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, d;
	cin >> t;
	while (t--)
	{
		cin >> n >> d;
		int *arr = new int[n];
		int *arr2 = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int j = 0; // index for elements of arr2
		for (int i = d; i < n; i++)
		{
			arr2[j] = arr[i];
			j++;
		}
		for (int i = 0; i < d; i++)
		{
			arr2[j] = arr[i];
			j++;
		}
		// in ra arr2
		for (int i = 0; i < n; i++)
		{
			cout << arr2[i] << " ";
		}
		cout << endl;
		delete(arr); delete(arr2);
	}
	return 0;
}

