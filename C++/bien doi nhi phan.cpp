#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, m, n;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		int mat[100][100];
		int tmp;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> tmp;
				if (tmp)
				{
					for (int p = 0; p < m; p++)
					{
						mat[i][p] = 1;
					}
					for (int p = 0; p < n; p++)
					{
						mat[p][j] = 1;
					}
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		
	}
	return 0;
}

