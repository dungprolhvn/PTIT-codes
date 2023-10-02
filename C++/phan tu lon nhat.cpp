#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
	    cin >> n;
	    vector<int> arr;
	    int tmp;
	    for (int i = 0; i < n; i++)
	    {
		cin >> tmp;
		arr.push_back(tmp);
	    }
	    int max = 0;
	    for (int i = 0; i < n; i++)
	    {
		if (arr[i] > max)
		{
			max = arr[i];
		}
	    }
	    cout << max << endl;
    } 
    return 0;
}
