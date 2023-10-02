#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int mat[100][100];
		// int tmp;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> mat[i][j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				{
					cout << mat[i][j] << " ";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		
	}
	return 0;
}

