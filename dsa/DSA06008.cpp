#include <iostream>
#include <vector>
#include <algorithm>

int countPairs(int x, std::vector<int> &y, int n, std::vector<int> &noOfY)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return noOfY[0];

    auto iter = upper_bound(y.begin(), y.end(), x);
    int ans = (y.end() - iter);

    ans += (noOfY[0] + noOfY[1]);

    if (x == 2)
        ans -= (noOfY[3] + noOfY[4]);

    if (x == 3)
        ans += noOfY[2];

    return ans;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, m;
        std::cin >> n >> m;
        std::vector<int> x(n), y(m);
        for (int i = 0; i < n; i++)
        {
            std::cin >> x[i];
        }
        for (int i = 0; i < m; i++)
        {
            std::cin >> y[i];
        }
        std::sort(x.begin(), x.end());
        std::sort(y.begin(), y.end());

        std::vector<int> noOfY(5, 0);
        for (int i = 0; i < m; i++)
            if (y[i] < 5)
                noOfY[y[i]]++;

        int totalPairs = 0;
        for (int i = 0; i < n; i++)
            totalPairs += countPairs(x[i], y, m, noOfY);

        std::cout << totalPairs << "\n";
    }
    return 0;
}