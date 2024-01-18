#include <bits/stdc++.h>
#define PI 3.141592653589793238
typedef unsigned long long ll;

using namespace std;

struct Point
{
    double x, y;
};

double distance(Point a, Point b)
{
    return sqrt((b.y - a.y) * (b.y - a.y) + (b.x - a.x) * (b.x - a.x));
}

void calcArea(Point a, Point b, Point c)
{
    // Check if three point form a triangle
    double l1 = distance(a, b), l2 = distance(b, c), l3 = distance(c, a);
    if ((l1 + l2) <= l3 || (l2 + l3) <= l1 || (l3 + l1) <= l2)
    {
        cout << "INVALID\n";
        return;
    }
    // calculate
    double s = sqrt((l1 + l2 + l3) * (l1 + l2 - l3) * (l2 + l3 - l1) * (l3 + l1 - l2)) / 4;
    double r = (l1 * l2 * l3) / (4 * s);
    double area = PI * r * r;
    cout << fixed << setprecision(3) << area << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Point a, b, c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        calcArea(a, b, c);
    }
    return 0;
}